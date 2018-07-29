function loadData() {
    console.log("function loadData called");
    $.getJSON("http://127.0.0.1:9090/library/all",function(data){
        var df = document.createDocumentFragment(document.getElementById("quesbox"));
        putQues(data,df);
        $("#quesbox").append(df);
    });
}

function putQues(obj,df) {
    obj.forEach(element => {
        var str = document.createElement("ques");
        str.innerHTML = '<br><a href="/program/p' + element.id + '"><div class="choose"><div class="quescard">' + element.question + '</div></div></a>';
        df.appendChild(str);
    });
}

window.onload = loadData();