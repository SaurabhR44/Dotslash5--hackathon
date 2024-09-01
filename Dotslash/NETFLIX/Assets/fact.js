let a=6
function fact2(a){
    let arr = Array.from(Array(a+1).keys());
    let c = arr.slice(1,).reduce((a,b)=>a*b);
    return c
}fact2(25)

console.log("Scipt Js initiating......");
let boxes = document.querySelector(".container").childNodes

function randomColour(){
    let val1 = Math.ceil(0+Math.random()*255);
    let val2 = Math.ceil(0+Math.random()*255);
    let val3 = Math.ceil(0+Math.random()*255);
    return `rgba(${val1},${val2},${val3})`;

}
Array.from(boxes).forEach(e=>{
    e.style.color =randomColour();
    e.style.color= randomColour();
});


let input = "yes";

while (input !== "yes" && input !== "no") {
  input = prompt("Please enter 'yes' or 'no':");
}
