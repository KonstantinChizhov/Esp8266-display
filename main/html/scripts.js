
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