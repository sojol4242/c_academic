#include <stdio.h>
int main()
{

    // Values to a variable can be useing assignment operators

    /*
   there are some assignment operators found in C.

  like : =, +=, -=, *=, /=, %=, <<=,>>=,&=,|=,^=

   */

    // some coding examples for assignment operators

    int a = 10;
    float b = 12;

    a += 14; // first ad the value and then it assign to a.

    b /= 14; // first divide then assign to b;

    // complex examples

    int x = 17;

    x ^= 15;

    printf("a= %d\n", a);
    printf("b= %f\n", b);

    printf("%d", printf("%d", x += 3));
    printf("\n");
    char f = 7;
    f ^= 5;
    printf("%d", printf("%d", f += 3));

    return 0;
}