#include <stdio.h>
void printHello(int count);
int printNaturalNumber(int count);
int sumOfNaturalNumber(int n);
int factoricalFunc(int n);
int fibonacciFunc(int n);
int main(int argc, char const *argv[])
{
    int limit;

    printf("Enter Limits\n");
    scanf("%d", &limit);
    printHello(limit);
    printNaturalNumber(limit);
    int sum = sumOfNaturalNumber(limit);
    int factorial = factoricalFunc(limit);

    printf("\n");
    printf("Sum of 1 to %d is %d\n", limit, sum);
    printf("factorial of 1 to %d is %d\n", limit, factorial);
    printf("fibonacci of  %d is %d\n", limit, fibonacciFunc(limit));

    return 0;
}
// recursion function for printing hello
void printHello(int count)
{
    if (count == 0)
        return;
    printf("Hello\n");
    printHello(count - 1);
}

// recursion function for printing natural number
int printNaturalNumber(int count)
{
    if (count)
    {

        printNaturalNumber(count - 1);
    }
    else
    {
        return 0;
    }
    printf("%d\t", count);
}
// recursion function for printing sum of natural number

int sumOfNaturalNumber(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return sumOfNaturalNumber(n - 1) + n;
    }
}
// recursion function for printing sum of factorial number

int factoricalFunc(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return factoricalFunc(n - 1) * n;
    }
}
int fibonacciFunc(int n)
{

    if (n <= 1)
    {
        return n;
    }

    else
    {
        return fibonacciFunc(n - 1) + fibonacciFunc(n - 2);
    }
}