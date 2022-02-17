#include <stdio.h>
long int factoricalFunc(int n);
int main()
{
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    printf("Factorial of %d is %ld", n, factoricalFunc(n));
    return 0;
}
// recursion function
long int factoricalFunc(int n)
{
    if (n >= 1)
        return n * factoricalFunc(n - 1);
    else
        return 1;
}