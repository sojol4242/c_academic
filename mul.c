#include <stdio.h>

int function(int a, int b)
{
    int res = a * b;

    return res;
}

int main()
{
    int product = function(4, 6);
    printf("Result %d", product);

    return 0;
}
