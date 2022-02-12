// functions
// block of code required to perform a particular task

// syntax
// function (parameters)
// {
//  some work
// }

// a and b are parameters
function sum (a,b) // function declaration
{
    // definition
    var result = a+b;
    // returning result
    return result;
}
// 10 and 20 are arguments
var ans  = sum(10,20);
console.log(ans);

// anonymous function expression is the whole fucntion
// while function(a,b) is anonymus function
var funExp = function(a,b)
{
    return a+b;
}

console.log(funExp(10,20));