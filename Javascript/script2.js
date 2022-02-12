// conditionals and loops

// 1.) if else
var x = 5;
if(x){
    console.log('yes');
}
else{
    console.log('no');
}

// 2.) ternary : only operators that takes three operators
// variable  = (condition) ? value1 : value2;

// since 5 is treated as true
// we get value of x as true
var x = (5)?true:false;
console.log(x);

// 3.)switch statement

var area = "circle";
var PI =3.142, l=5,b=4,r=3;

switch(area)
{
  case 'circle':
      console.log(PI*r**2); break;

  case 'triangle':
      console.log((l*b)/2); break;
 
  case 'rectangle':
      console.log(l*b); break;
  
 default:
     console.log("enter validd condition"); break;
}


// 4.) while loop

var variable = 5;
// block scope
while(variable)
{
    console.log(variable);
    variable--;
}

// 5.)Do-While Loop
var num=0;
do{
    console.log(num);
    num++;
}
while(num<=10);

// 5.) for loop
// initializer condition increment
for(var i=0 ; i<10 ; i++)
{
    console.log(i);
}