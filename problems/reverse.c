#include <stdio.h>
int main()
{
    int n=46456, reverse = 0, rem;
    // printf("Enter a number: ");
    // scanf("%d", &n);
    printf("Original %d\n", n);
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed %d", reverse);
    return 0;
}