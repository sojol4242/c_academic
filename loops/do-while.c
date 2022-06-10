
#include <stdio.h>
#define COLMAX 10
#define ROWMAX 20

int main()
{
    // int m = 1, n = 0;
    // do
    // {

    //     printf(m);

    //     m++;

    // } while (m <= n);

    // printf("%d", m);
    /***********Multiplication Table*************/
    // int row, col, y;
    // row = 1;
    // do
    // {
    //     col = 1;
    //     do
    //     {
    //         y = row * col;
    //         printf("%5d", y);
    //         col++;
    //     } while (col <= COLMAX);
    //     printf("\n");
    //     row++;
    // } while (row <= ROWMAX);
    // int count = 5;

    // while (--count > 0)

    //     printf("%d \n", count);
    // int n = 0,m=1;
    // do
    // {
    //     printf("%d",m);
    //     m++;

    // } while (m <=n);
    int I = 1;
    int sum = 0;
    do
    {
        sum = sum + I;
        I = I + 2;                /* Incrementing */
    } while (sum < 40 || I < 10); /* Testing */
    printf("%d %d\n", I, sum);

    return 0;
}
// do
// {
// statement
// } while (1);
