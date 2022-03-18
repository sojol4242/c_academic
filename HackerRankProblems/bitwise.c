#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

// void calculate_the_maximum(int n, int k)
// {
//     printf("%d & %d = %d\n", n, k, n & k);
//     printf("%d | %d = %d\n", n, k, n | k);
//     printf("%d ^ %d = %d\n", n, k, n ^ k);
// }

int main()
{
    double a, b, c;
    scanf("%lf %lf", &a, &b);
    c = a + b;
    printf("%.1lf\n", c);
    c = a - b;
    printf("%.1lf\n", c);
    c = a * b;
    printf("%.1lf\n", c);
    c = a / b;
    printf("%.1lf\n", c);

    return 0;
}
