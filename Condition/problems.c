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
    // char month[12][20] = {"Jan",
    //                       "Feb",
    //                       "Mar",
    //                       "Apr",
    //                       "May",
    //                       "Jun",
    //                       "Jul",
    //                       "Aug",
    //                       "Sept",
    //                       "Oct",
    //                       "Nov",
    //                       "Dec"};

    // int m;
    // scanf("%d", &m);

    // if (m < 1 || m > 12)
    // {
    //     printf("%d value is invalid\n press any key to terminate", m);
    //     getch();
    //     exit(0);
    // }
    // else if (m == 12)
    // {
    //     printf("%d is %s and it is last month of any year", m, month[m - 1]);
    // }

    // else if (m >= 0 || m < 12)
    // {
    //     printf("%d is %s and the next month is %s", m, month[m - 1], month[m]);
    // }
    //   int m = 1;
    //   if (m == 1)
    //   {
    //     printf(" Delhi ");
    //     if (m == 2)
    //     printf("Chennai");
    //     else
    //     printf("Bangalore");
    //   }
    //   else;
    //   printf(" END");
    //     int m, n, p;
    //     for (m = 0; m < 3; m++)
    //         for (n = 0; n < 3; n++)
    //             for (p = 0; p < 3; p++)
    //                 if (m + n + p == 2)
    //                     goto print;
    // print:
    //     printf("%d, %d, %d", m, n, p);
    int x = 5, y = 0, z = 1;
    if (!y)
    {
        /* code */
        z = 0;
    }
    else
        y = 1;
printf("%d %d %d",x,y,z);
    getch();
}
