
// A function is a group of statements that together perform a task. ... A function declaration tells the compiler about a function's name, return type, and parameters. A function definition provides the actual body of the function. The C standard library provides numerous built-in functions that your program can call. --google.com

/*
Advantage of functions in C
There are the following advantages of C functions.
👉 By using functions, we can avoid rewriting same logic/code again and again in a program.
👉 We can call C functions any number of times in a program and from any place in a program.
👉 We can track a large C program easily when it is divided into multiple functions.
👉 Reusability is the main achievement of C functions.
*/

/*
Types of functions: 
👉 Library Functions: They are implemented/ build in functions in c programming. In this section we cannot talk about this type.
<<<<<<< HEAD
=======

>>>>>>> 72b6674b57718b44fd9b7bdb1134c98d49254e4e
👉 User Defined Functions: The functions which are created by the C programmer, so that they can use it many times. It reduces the complexity of a big program and optimizes the code.
 
*/
/*
How we can create user defined functions: 
<<<<<<< HEAD
👉 Function declaration: A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type. This.
Examples:
int func(int var,char,var1); 
here int is return data type. if any data type cannot return then it should be return void type.
then inner first brackets we have two arguments. it is not necessary to give variable name in function declaration. 
=======

👉 Function declaration: A function must be declared globally in a c program to tell the compiler about the function name, function parameters, and return type. This.
Examples:
int func(int var,char,var1); 

here int is return data type. if any data type cannot return then it should be return void type.

then inner first brackets we have two arguments. it is not necessary to give variable name in function declaration. 

>>>>>>> 72b6674b57718b44fd9b7bdb1134c98d49254e4e
👉 Function definition : It contains the actual statements which are to be executed. It is the most important step to which the control comes when the function is called. Here, we must notice that only one value can be returned from the function.
Example:
int func(int var,char,var1) 👉 function header
{
// your code is here   👉 Body
} 

here int is return data type. if any data type cannot return then it should be return void type.

then inner first brackets we have two parameters. it is necessary here to give variable name in function definition. 


👉 Function call: Function can be called from anywhere in the program. The parameter list must not differ in function calling and function declaration. We must pass the same number of functions as it is declared in the function declaration.
Example:
we can use the above function by call it. 
func(arg1,arg2);(in main function. cause every code is execute on main function)
 
*/
// first example: function

#include <stdio.h>
void printName(); //👈 declaration of printName function;
void main()
{
    printf("Hello ");
    printName(); //👈 call the printName function;
}
// 👇 definition of printName function;

void printName()
{
    printf("printName");
}