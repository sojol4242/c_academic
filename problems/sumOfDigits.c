#include <stdio.h>
int main()
{
    int n=124, sum = 0, rem;
   
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
        printf("%d \n",rem);
    }
    printf("Sum is= %d", sum);
    return 0; 
}