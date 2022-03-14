#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, b;
    float m, n;
    scanf("%d %d", &a, &b);
    scanf("\n");
    scanf("%f %f", &m, &n);
    printf("%d %d\n", (a + b), (a - b));
    printf("%.1f %.1f", (m + n), (m - n));

    return 0;
}