#include <stdio.h>

/* including math.h because we will use sqrt()
 function in our program */

#include <math.h>

int main()
{

    /* "c" is taken to count the number of primes.
    It is initiated as "1" because we are printing
    the first prime number "2" before looping*/

    // int i, j, c = 1, n;
    // scanf("%d", & n);
    // /* Printing 2 as a prime number */

    // printf("\n The prime numbers are: \n 2");

    // for (i = 3; i <= n; i++)
    // {
    //     for (j = 2; j <= sqrt(i); j++)
    //     {
    //         if (i % j == 0)
    //             goto next;
    //     }

    //     printf(", %d", i);
    //     c = c + 1;

    // next:
    //     continue;
    // }

    // printf("\n\n The number of primes: %d", c);
    int cnt = 5;
    while (cnt-- > 0)
        printf("%d ", cnt);

    return 0;
}