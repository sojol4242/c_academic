// /*-------------------------------

// problem:
// find largest of three numbers
// with nested if else

// ---------------------------------*/
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {

//     int a = 113, b = 576, c = 87;

//     if (a > b)
//     {
//         if (a > c)
//         {
//             printf("%d", a);
//         }
//         else
//         {
//             printf("%d", c);
//         }
//     }
//     else
//     {
//         if (c > b)
//         {
//             printf("%d", c);
//         }
//         else
//         {
//             printf("%d", b);
//         }
//     }

//     return 0;
// }
/*-------------------------------

problem:
find month and next of month
with if else


---------------------------------*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(int argc, char const *argv[])
{
    char month[12][20] = {"Jan",
                          "Feb",
                          "Mar",
                          "Apr",
                          "May",
                          "Jun",
                          "Jul",
                          "Aug",
                          "Sept",
                          "Oct",
                          "Nov",
                          "Dec"};

    int m;
    scanf("%d", &m);

    if (m < 1 || m > 12)
    {
        printf("%d value is invalid\n press any key to terminate", m);
        getch();
        exit(0);
    }
    else if (m == 12)
    {
        printf("%d is %s and it is last month of any year", m, month[m - 1]);
    }

    else if (m >= 0 || m < 12)
    {
        printf("%d is %s and the next month is %s", m, month[m - 1], month[m]);
    }

    getch();
}
