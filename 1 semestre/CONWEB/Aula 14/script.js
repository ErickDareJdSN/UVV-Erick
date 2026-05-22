var string1 = 'Isso é uma string';
var num1 = 4;
var num2 = 5;
const issoeumbooleano = true;
var string2 = '4';

console.log(string1 == num1);
console.log(num1 == string2);
console.log(num1 === string2);
console.log(num1 === num2);

console.log(typeof num1);
console.log(typeof issoeumbooleano);
console.log(typeof string1);
console.log(typeof string1 == typeof string2);

console.log(num1 + string2);
console.log(num2 + string2);

var floatvalue1 = 0.06;
var floatvalue2 = 0.0;
var sum = floatvalue1 + floatvalue2;

console.log(sum.toPrecision(3));

for (var i=0; i<=10; i+=2){
    if (i%2 === 0){
        console.log(i);
    }
}

for (var j=1; j<=11; j+=2){
    if (j%2 !==0){
        console.log(j);
    }
}

// Scripts da página

document.getElementById("title2")
.innerHTML = "Olá amigos! Como estão, tranquilos?"

function invertecores() {
    const corpo = document.getElementById('corpo')
    const button = document.getElementById('button')
    const button2 = document.getElementById('button2')
    const title = document.getElementById('title')
    const title2 = document.getElementById('title2')

    corpo.style.backgroundColor = "black";
    button.style.backgroundColor = "black";
    button.style.borderWidth = "0px"
    title.style.color = "white";
    title2.style.color = "white"; 
    button2.style.backgroundColor = "black"
    button2.style.borderWidth = "2px"
}

function revertecores() {
    corpo.style.backgroundColor = "white";
    button.style.backgroundColor = "white";
    button.style.borderWidth = "2px"
    title.style.color = "black";
    title2.style.color = "black"; 
    button2.style.backgroundColor = "white"
    button2.style.borderWidth = "0px"
}