#include <stdio.h>
#include <math.h>
int main()
{
    //     int i = 1;
    // backword goto

    // print:
    //     printf("%d\t", i);
    //     i++;
    //     if (i < 50)
    //     {
    //         goto print; // call goto
    //     }
    //     return 0;
    //    int num, i = 1;
    //     printf("Enter the number whose table you want to print?\n");
    //     scanf("%d", &num);
    // backword goto
    // table:
    //     printf("%d x %d = %d\n", num, i, num * i);
    //     i++;
    //     if (i <= 15)
    //         goto table;

    // backword goto

    int x, y;
read:
    scanf("%d %d", &x, &y);

    if (x < 0 || y < 0)
    {
        goto read;
    }
    else if (x == 0)
    {
        goto read;
    }
    int res = pow(x, y);
    printf("%d\n", res);
    goto read;
    return 0;
}
