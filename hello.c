#include<stdio.h>

int main()
{
    printf("Hello C Programme\nWelcome to Dept of EEE \n");
     int c;
    printf("Enter a character");
    /*
        Take a character as input and
        store it in variable c
    */
    c = getchar();
    /*
        display the character stored
        in variable c
    */
    putchar(c);
    // int x=100;
    // printf("X= %d\n",10+ x++);
    // printf("X= %d\n",10+ ++x);

    return 0;
}
