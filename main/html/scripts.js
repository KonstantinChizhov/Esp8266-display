let oldX = 0;
let oldY = 0;
let mousePressed = false;
let ctx = null;
const scale = 1;
window.addEventListener('load', () => {

    let canvas = document.getElementById("canvasElem")
    ctx = canvas.getContext('2d');
    ctx.color = 'black';
    ctx.lineWidth = 1;
    ctx.scale(scale, scale);
    canvas.onmousemove = function (e) {
        if (mousePressed) {
            let x = (e.pageX - canvas.offsetLeft) / scale;
            let y = (e.pageY - canvas.offsetTop) / scale;
            ctx.beginPath();
            ctx.lineWidth = 1;
            ctx.lineJoin = "round";
            ctx.moveTo(oldX, oldY);
            ctx.lineTo(x, y);
            ctx.closePath();
            ctx.stroke();
            oldX = x;
            oldY = y;
        }
    };
    canvas.onmousedown = function (e) {
        oldX = (e.pageX - canvas.offsetLeft) / scale;
        oldY = (e.pageY - canvas.offsetTop) / scale;
        mousePressed = true;
    };
    canvas.onmouseup = function (e) {
        mousePressed = false;
    };
    canvas.onmouseleave = function (e) {
        mousePressed = false;
    };

});

function clear_canvas() {
    //ctx.setTransform(1, 0, 0, 1, 0, 0);
    ctx.clearRect(0, 0, ctx.canvas.width, ctx.canvas.height);
}
function send_image() {
    let canvas = document.getElementById("canvasElem")
    let ctx = canvas.getContext('2d');
    var imgd = ctx.getImageData(0, 0, ctx.canvas.width, ctx.canvas.height);
    var pix = imgd.data;
    var bufferSize = ctx.canvas.width * ctx.canvas.height / scale / scale / 8;
    var bwbuffer = new ArrayBuffer(bufferSize);
    var int8View = new Int8Array(bwbuffer);
    var lineSttride = Math.ceil(ctx.canvas.width / 8);
    for (var i = 0, n = pix.length; i < n; i += 4) {
        var maxVal = Math.max(pix[i] = 0, pix[i + 1], pix[i + 2], 255 - pix[i + 3]);
        if (maxVal < 127) {
            let x = (i / 4) % ctx.canvas.width;
            let y = Math.floor(i / 4 / ctx.canvas.width);
            let mask = 1 << (x & 0x07);
            let index = (x >> 3) + y * lineSttride;
            int8View[index] |= mask;
        }
    }
    fetch(`api/v1/display/image?x=0&y=0&w=${ctx.canvas.width}&h=${ctx.canvas.height}`, { method: 'POST', body: bwbuffer });
}

function sendtext() {
    var text = document.getElementById("textToSend").value;
    var color = document.getElementById("color").checked ? 0 : 1;
    var bkcolor = color == 0 ? 1 : 0;
    var x = document.getElementById("x_coord").value;
    var y = document.getElementById("y_coord").value;
    var font = document.getElementById("font").checked ? 1 : 0;
    var url = encodeURI(`api/v1/display/text?text=${text}&x=${x}&y=${y}&font=${font}&color=${color}&bkcolor=${bkcolor}`);
    fetch(url);
}

function clear_display() {
    var color = document.getElementById("color").checked ? 1 : 0;
    fetch(`api/v1/display/clear?color=${color}`);
}

