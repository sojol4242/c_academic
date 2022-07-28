#include <stdio.h>
long int factoricalFunc(int n);
int main()
{
    int n;
    printf("Enter a positive integer: \n");
    scanf("%d", &n);
    printf("Factorial of %d is %ld", n, factoricalFunc(n));
    // int n, i;
    // unsigned long long fact = 1;
    // printf("Enter an integer: ");
    // scanf("%d", &n);

    // shows error if the user enters a negative integer
    // if (n < 0)
    //     printf("Error! Factorial of a negative number doesn't exist.");
    // else
    // {
    //     for (i = 1; i <= n; i++)
    //     {
    //         fact *= i;
    //     }
    //     printf("Factorial of %d = %llu", n, fact);
    // }
    return 0;
}
// recursion function
long int factoricalFunc(int n)
{

    if (n == 1)
        return 1;

    else if (n >= 1)
        return n * factoricalFunc(n - 1);
}