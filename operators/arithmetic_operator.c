#include <stdio.h>
int main()
{

    /*
     there are 5 types of arithmetic operations exists in C Programme.

    addition
    multiplication
    division
    subtraction
    modulus
 
  
  those all are also called binary operators.
     
   */

    //  Here I discuss about above operator with one by one example.

    int a = 99, b = 78, c = 45, d = 40; // random selection value
    ;
    // simple addition: here we add two numbers together

    int sum = a + b;
    // simple substraction: here we subtract two numbers

    int sub = a - b;

    // simple multiplication: here we multiply two numbers

    int mul = a * b;

    // simple division : here we divide two numbers

    int div = a / b;

    // simple modulus operations: here we get modulus between two numbers

    int mod = a % b;

    // another arithmetic operator found in C called increment and decrement. they are unary operator

    // increment :

    int pre_increment = ++a;  //  pre_increment
    int post_increment = a++; //  post_increment

    /* those increment has same in result but there a bit of difference between them like pre increment first increase the previous value and then assign to another value;
    but post_increment first assign to a value then it increae the previous value;   
    */

    int pre_decrement = --b;  // it is pre_decrement
    int post_decrement = b--; // it is post_decrement

    /*  those decrement has same in result but there a bit of difference between them like pre decrement first decrease the previous value and then assign to another value;
                                                        
    but post_decrement first assign to a value then it decrease the previous value;

    for better understand go here > https://www.youtube.com/watch?v=Lpo1QYsuAmM&list=PLBlnK6fEyqRggZZgYpPMUxdY1CYkZtARR&index=22
    */

    // all arithmetic in row; 

    float res = a + b * c - d % a;

    printf("Addition result : %d\n", sum);
    printf("Subtraction result : %d\n", sub);
    printf("Multiplication result : %d\n", mul);
    printf("Division result : %d\n", div);
    printf("Modulus result : %d\n", mod);
    printf("Pre Increment result : %d\n", pre_increment);
    printf("Post increment result : %d\n", post_increment);
    printf("Pre Decrement result : %d\n", pre_decrement);
    printf("Post Decrement result : %d\n", post_decrement);
    printf("Complex : %.3f\n", res);

    return 0;
}