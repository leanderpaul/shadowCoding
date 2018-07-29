function addData() {
    var url = $(location).attr("href");
    newurl = url.replace("program", "programdata");
    console.log(newurl);
    $.getJSON(newurl, function (data) {
        console.log(data[0].c + "\n" + data[0].cpp + "\n" + data[0].java + "\n" + data[0].python );
        $("#c-code").attr("src", data[0].c);
        $("#cpp-code").attr("src", data[0].cpp);
        $("#java-code").attr("src", data[0].java);
        $("#python-code").attr("src", data[0].python);
    });
}

function openPage(pageName, elmnt, color) {
    var i, tabcontent, tablinks;
    tabcontent = document.getElementsByClassName("tabcontent");
    for (i = 0; i < tabcontent.length; i++) {
        tabcontent[i].style.display = "none";
    }
    tablinks = document.getElementsByClassName("tablink");
    for (i = 0; i < tablinks.length; i++) {
        tablinks[i].style.backgroundColor = "";
    }
    document.getElementById(pageName).style.display = "block";
    elmnt.style.backgroundColor = color;

}

window.onload = addData();