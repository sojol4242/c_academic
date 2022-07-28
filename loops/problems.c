#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // long int p = 1, n;
    // double q;
    // scanf("%d", &n);
    // for (int i = 0; i <= n; i++)
    // {
    //     if (i == 0)
    //     {
    //         p = 1;
    //     }
    //     else
    //     {
    //         p = 2 * p;
    //         q = 1.0 / (double)p;
    //     }

    //     printf("%d %10d %10lf\n", p, i, q);
    // }
    int a = 5, b = 10, c = -6;
    int x=(a / 2.0 == 0.0 && b / 2.0 != 0.0) || c < 0.0;
    printf("%d", x);
    return 0;
}
