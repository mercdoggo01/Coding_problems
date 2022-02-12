// 1.) output showing
console.log("husky");
// install node js and use ctrl + ` on vscode to open terminal
// then type node script1.js ( whatever name in terminal and run it)

// 2.) variables
var myName = 'Husky';
// variable(key) name = value  {declaration syntax}

// 3.) Naming conventions
// write in camel case conventions / normal also accepted but better
// to do so in camel case
// number cannot be used as number permisible ways letter of _ (underscore) or $
// cannot use Js reserved words to write name


// 4.) datatypes:
// 6 data types that are primitives
// undefined Boolean number string bigint symbol
var myNum = 78;
var myBool = true;

// type of operator: used to find the datatype
console.log(typeof(myName));
console.log(typeof(myNum));
console.log(typeof(myBool));

// datatype operations
console.log(10 + "20"); // concacts
console.log(9-5); // arithmetic

//special case below 
console.log(9-"5"); // bug

console.log(" "+" "); // space
console.log(" "+"0"); // space + 0
console.log("true"+"true"); // concat
console.log("false"+"true"); // concat
console.log("false"-"true"); // Will give NaN
console.log(true-true); // 1- 1 =0
console.log(false-true); // -1  (i.e  0-1)

// null vs undefined
var a = null, b;
// here null value assigned to  a while b has no datatype assignment so 
// undefined
console.log(a);
console.log(typeof(a)); // bug no dataype as object

console.log(b);
console.log(typeof(b)); // undefined datatype

// what is NaN
// NaN is a property of the global object.
// In other words, it is a variable in global scope
// The initial value of NaN is not-A-Number

// isNaN (is not a number) used to check given string is not a number
console.log(isNaN(9195578190));
console.log(isNaN('husky'));

// 5.) Operators
// 1.} assignment operator (=)
var x = 5;
var y = 5;

// due to concat string and x==y are compared so it gives false
console.log("is both equal" + x==y);

console.log(x==y);

// instead do this
console.log(`is both equal : ${x==y}`);

// 2.} arithmetic operators 
console.log(3+3);
console.log(3-2);
console.log(20/5);
console.log(5*6);
console.log(81%8);

// power
console.log(3**3); // 3^3
console.log(10**-1); // 1/10

//3.} comparison operators (== ,!= ,>= ,<= , < , >)
console.log(x!=y);


// 4.} increment and decrement operators
var x = 15;
// 15 assigned to newX while x itself is incremented
var newX = x++;
// see result
console.log(newX); // 15
console.log(x); //16
console.log(++newX); // 16
console.log(newX++); // 16

var y = 15;
var newY = y-- + 5; // y gets decremented  while newY gets the result of addition of y and 5 
// which is 15
console.log(y); // 14  
console.log(newY); // 20

var num1 = 5;
var num2 = '5';

// will give true because it's checking value and
// since both are 5 it will give true
console.log(num1 == num2);
// by triple equal to it will give false
// as it will check value and datatype both
console.log(num1 === num2);