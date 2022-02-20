#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


// 1.) comments
// single line comment

// below is an example explaining importance of multi line comment.


// 2.) Introduction
/*
About C Programming
Procedural Language - Instructions in a C program are executed step by step.
Portable - You can move C programs from one platform to another, and run it without any or minimal changes.
Speed - C programming is faster than most programming languages like Java, Python, etc.
General Purpose - C programming can be used to develop operating systems, embedded systems, databases, and so on.
*/

// 3.)Keywords


// Keywords: Keywords are predefined, reserved words used in programming that have special meanings to the compiler.
// Keywords are part of the syntax and they cannot be used as an identifier

/*
All reserved keywords for C
1.) auto
2.) int
3.) double
4.) struct
5.) break
6.) else
7.) long
8.) switch
9.) case
10.) enum
11.) register
12.) typedef
13.) char
14.) extern
15.) return
16.) union
17.) continue
18.) for
19.) signed
20.) void
21.) do
22.) if
23.) static
24.) while
25.) default
26.) goto
27.) sizeof
28.) volatile
29.) const
30.) float
31.) short
32.) unsigned
*/

// 4.) identifiers

// Identifiers: Identifier refers to name given to entities such as variables, functions, structures etc.
// eg.) int age = 26;  here identifier is age and int is keyword


// 5.) characters in c

// character set: In C
// There are 256 valid characters in c (0 to 255)


// Eg.) below if function with no return value
// It is used to print the valid character set of c langauge
void printallchars()
{
    // declares a variable named i and assigns it
    // value 0
    int i=0;
    //  runs loop from 0 to 255 inclusive range
    for(i=0 ; i<=255 ; i++)
    {
        // prints the integer(ASCII value) corresponding
        // to the character which has value i
        printf("The ASCII value of %c is = %d\n",i,i);
    }
}

// 6.) datatypes

// void: s an incomplete type. It means "nothing" or "no type".
// Note that, you cannot create variables of void type
void alldatatypes()
{
    int n;
    printf("size of int = %d bytes\n",sizeof(int));
    // Maximum and Minimum  signed 32-bit integer
    printf("maximum integer is: %d\n",INT_MAX);
    printf("minimum integer is: %d\n",INT_MIN);

 // If you are sure, only a small integer ([−32,767, +32,767] range) will be used, you can use short.
  short a;
  long b;
  // greater value storage than INT_MAX and INT_MIN
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));

}

// 7.) I/O operations

void io()
{
    // variable declaration
    int testInteger;
    float num1;
    double num2;
    char chr;

    // input
    scanf("%d", &testInteger);
    scanf("%f", &num1);
    scanf("%lf", &num2);
    scanf("%c",&chr);

    // output
    printf("Number = %d",testInteger);
    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);
    printf("You entered %c.", chr);
}

int main()
{
    // print all valid characters
    printallchars();

    // print data types as well as their size in bytes
    alldatatypes();

    // input output operations
    io();
    return 0;
}
