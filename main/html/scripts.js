
function sendtext() {

    var url = new URL("/api/v1/display/text");
    params = { x: 0, y: 0, font: 0, text: document.getElementById("textToSend").value };
    Object.keys(params).forEach(key => url.searchParams.append(key, params[key]));
    fetch(url);
}

function clear_display() {

    fetch("/api/v1/display/clear?color=0");
}