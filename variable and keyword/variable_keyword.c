#include <stdio.h>

// Rules of defining variable:
/*
 1.  variable start with alphabate  and underscore
 2. can't start with digits
 3. it can have alphabate, underscore, digits
 4. variable shouldn't have whitespaces 
 5. before declare a variable it should have a data type in front of variable name and it should be initalized before we use it.

 */

// types of variable

/*
  local variable :
   A variable that is declared and used inside the function or block is called local variable. 
   It’s scope is limited to function or block. It cannot be used outside the block.Local variables need 
   to be  initialized before use.
 
*/

int function1()
{
    int x = 10; // local variable for function1;
                /*
    here we use this x variable only in function1 because it is a local variable. we can't use x outside of this function. if we try then it gives us an error.
    this is how local variable works
    */
    printf("%d\n", x);
}

int main()
{
    function1();
    return 0;
}

// global variable
/*
A variable that is declared outside the function or block is called a global variable. 
It is declared at the starting of program. It is available to all the functions. 
*/
int x = 10; // global variable for function1;

int function1()
{

    printf("from function1 👉 %d\n", x);
}
int function2()
{

    printf("from function1 👉 %d\n", x);
}

int main()
{
    function1();
    function2();
    printf("from main 👉 %d\n", x);

    // we can use x any where in this file. that's why it is called global variable
    return 0;
}

// static  variable

/*
A variable that retains its value between multiple function calls is known as static variable. 
It is declared with the static keyword. 
*/

int function1()
{
    static int x = 10;
    x = x + 10;

    printf("%d\n", x);
}

int main()
{
    function1();
    function1();
    function1();
    //  static variable will print the incremented value in each function call. that means static variable will change after call this function and assigned new increment value
    return 0;
}



// 4. Autometic variables
/*
Which variables declared inside the block, are automatic variables by default. We 
can explicitly declare an automatic variable using auto keyword.
NB: Automatic variables are similar as 
local variables.
so i don't give this type  of variable's example;
we move on;

*/

/* 5. External variable can be shared between multiple C files.We can declare external variable using extern keyword.
like you have  single.c and double.c files. if you declared a variable in single.c as 
extern int x=10; 
you can use this variable to double.h file also single.h file.

it is a kind of a vast version of global variable.



*/





