#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    int n = 1;
    while (n <= 10)
    {
     
        if (n % 2 != 0)
        {
            sum += n;
        }
           n++;
    }
    printf("sum = %d\n", sum);
    return 0;
}
