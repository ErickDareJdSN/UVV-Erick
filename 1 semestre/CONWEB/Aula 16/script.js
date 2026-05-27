function newdate() {
    var ano = document.getElementById("inputDate").value;
    var resultado = 2026 - Number(ano);

    window.alert(`Nesse ano você possui, ou irá fazer, ${resultado} anos.`);
}