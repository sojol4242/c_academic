#include <stdio.h>

// keywords in C:
/*
Keywords are specific reserved words in C each of which has a specific feature associated with it. Almost all of the words which help us use the functionality of the C language are included in the list of keywords. So you can imagine that the list of keywords is not going to be a small one!

There are a total of 44 keywords in C (C89 – 32, C99 – 5, C11 – 7):

auto        extern        short        while
break        float        signed        _Alignas
case        for        sizeof        _Alignof
char        goto        static        _Atomic
const        if        struct        _Bool
continue    inline        switch        _Complex
default     int        typedef        _Generic
do         long        union        _Imaginary
double     register    unsigned    _Noreturn
else       restrict    void        _Static_assert
enum       return        volatile    _Thread_local

every keywords has his own special functionality. everyone has its own characteristics.

*/

// variable in C

// Rules of defining variable:

/*
👇
 1.  variable start with alphabate  and underscore
 2. can't start with digits
 3. it can have alphabate, underscore, digits
 4. variable shouldn't have whitespaces
 5. before declare a variable it should have a data type in front of variable name and it should be initalized before we use it.
 */

/*

N.B: one file has one main function. here you can see 3 main file. for learning perpose I used 3 main function for 3 examples. so please when you run your program you should check your main function. 🔏🔏🔏🔏
*/

// types of variable

/*
  local variable :
   A variable that is declared and used inside the function or block is called local variable.
   It’s scope is limited to function or block. It cannot be used outside the block.Local variables need
   to be  initialized before use.

*/

int sum(int a )
{
    static int sum=0 ;
    sum = sum+a;
    return sum;
}

int main()
{
    
    int x = 10;
    static int y = 10; // static variable
    x = x + 1;
    y = y + 1;
    // printf("%d ,%d\n", x, y);
    printf("sum %d\n", sum(5));
    printf("sum %d\n", sum(4));
    printf("sum %d\n", sum(5));

   
     
    return 0;
}

// global variable

/*
👇
A variable that is declared outside the function or block is called a global variable.
It is declared at the starting of program. It is available to all the functions.
*/
// int x = 10; // global variable for function1;

// int function1()
// {

//     printf("from function1 👉 %d\n", x);
// }
// int function2()
// {

//     printf("from function1 👉 %d\n", x);
// }

// int main()
// {
//     function1();
//     function2();
//     printf("from main 👉 %d\n", x);
// we can use x any where in this file. that's why it is called global variable
//     return 0;
// }

// static  variable

/*👇
A variable that retains its value between multiple function calls is known as static variable.
It is declared with the static keyword.
*/

// int function1()
// {
//     static int x = 10;
//     x = x + 10;

//     printf("%d\n", x);
// }

// int main()
// {
//     function1();
//     function1();
//     function1();
//  static variable will print the incremented value in each function call. that means static variable will change after call this function and assigned new increment value
//     return 0;
// }

// 4. Autometic variables
/*👇
Which variables declared inside the block, are automatic variables by default. We
can explicitly declare an automatic variable using auto keyword.
NB: Automatic variables are similar as
local variables.
so i don't give this type  of variable's example;
we move on;🔏🔏🔏🔏

*/

/*👇
5. External variable can be shared between multiple C files.We can declare external variable using extern keyword.
like you have  single.c and double.c files. if you declared a variable in single.c as
extern int x=10;
you can use this variable to double.h file also single.h file.
it is a kind of a wider version of global variable.

*/

// so guys here is from my side for a simple discussion of variables and keywords in C language. Thanks!
