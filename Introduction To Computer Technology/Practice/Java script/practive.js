/*let a=67;
console.log(a);
a= "Shah Hunain";
console.log(a);*/

/*let a=15;
let b="Shah Hunain"
{
    let b= "Yasbah Ali";
    console.log(b);
}
console.log(b);*/

/*let age=prompt("Enter your age: ");
if(age>18){
    console.log("You can drive");
}
else{
    console.log("You can not drive");
}*/

/*let age=prompt("Enter your age: ");
let b=prompt("What is your sex: ");
if(age >18 && b=="Male"){
    alert("Hi men! You can drive");
}
else if(age >18 && b=="Female"){
    alert("Hi women! You can drive");
}
else{
    alert("You can not drive");
}*/

/*let c_num=23;
et a;
while(a!=c_num){
    a=prompt("Enter number: ");
    if(a==c_num){
        console.log("You have entered the correct number "+c_num);
    }
    else{
        console.log("Try again!");
    }
}*/

/*let a=prompt("Enter number: ");
if(a%2==0 && a%3==0){
    console.log("The number "+a+ "is divisible by 2 and 3");
}
else{
    console.log("The number " +a+ "is not divisible by 2 and 3");
}*/

/*let a=prompt("Enter your age: ");
a=Number.parseInt(a);
console.log(a>18?"You can drive":"You can not drive");*/

/*function sum(a,b,c,d){
    return (a+b+c+d)/4;
} 
let a=prompt("Enter the first number: ");
a=Number.parseInt(a);
let b=prompt("Enter the second number: ");
b=Number.parseInt(b);
let c=prompt("Enter the third number: ");
c=Number.parseInt(c);
let d=prompt("Enter the fourth number: ");
d=Number.parseInt(d);
console.log(sum(a,b,c,d));*/

/*let a=prompt("Enter number: ");
a=Math.round(a);
console.log(a);*/

/*let marks={
    Shah: 90,
    Ali: 92,
    Fatima: 100
}
for(let i=0; i<Object.keys(marks).length;i++){
    console.log("The marks of " + Object.keys(marks)[i] " are " + marks[Object.keys(marks)[i]])
}*/

/*let a=prompt("Enter number: ");
a=Number.parseInt(a);
let array=[1,2,3,4,5];
array.push(a);
console.log(array);*/

/*let i,a;
let array=[1,2,3,4,5];
do{
    a=prompt("Enter the number: ");
    a=Number.parseInt(a);
    array.push(a);
}while(a!=0);
console.log(array);*/

/*let arr = [10,20,15,20,30,40,50]
let n = arr.filter((x)=>{
    return x%10==0;
})
console.log(n);*/

/*let array=[1,2,3,4,5];
let n=array.map((x)=>{
    return x*x;
})
console.log(n);*/

let array=[1,2,3,4,5];
let n=array.reduce((x1,x2)=>{
    return x1*x2;
})
console.log(n);