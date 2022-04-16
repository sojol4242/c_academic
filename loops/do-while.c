
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
    int row, col, y;
    row = 1;
    do
    {
        col = 1;
        do
        {
            y = row * col;
            printf("%5d", y);
            col++;
        } while (col <= COLMAX);
        printf("\n");
        row++;
    } while (row <= ROWMAX);

    return 0;
}
// do
// {
// statement
// } while (1);
