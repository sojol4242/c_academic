#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0, n;
    float x, y = 1.0;

    scanf("%f %d", &x, &n);

    while (count <= n)
    {
        y = y * x;
        count++;
    }
    printf("x to the power n is : %f\n", y);
    return 0;
}
