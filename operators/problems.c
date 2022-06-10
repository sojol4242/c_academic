#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int a=5,b=10,c=-6;
    // int d= (a/2.0 == 0.0 && b/2.0 != 0.0) || c < 0.0;
    // printf("%d", d);
    // char x;
    // int y;
    // x = 100;
    // y = 125;

    // printf("%c\n", x);
    // printf("%c\n", y);
    // printf("%d\n", x);
    // int x = 100;
    // printf("%d\n", 10 + x++);
    // printf("%d\n", 10 + ++x);

    // int x = 5, y = 10, z = 11;
    // x = y = z;
    // printf("%d\n", x);
    {
        // unsigned x = 1;
        // signed char y = -1;
        // if (x > y)
        //     printf("x>y ");
        // else
        //     printf("x<= y");

        // int x = 10;
        // if (x = 20)
        //     printf("t");

        // else
        //     printf("f");
        int x = 10;
        x = (x == 10 || x > 10 && !x);
        printf("%d", x);
        return 0;
    }
}
