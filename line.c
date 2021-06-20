#include <stdio.h>

void function(int a, int b)
{
    // int result= a+b;
    // printf("result %d",result);
    for (int i = 0; i <= 20; i++)
    {
        printf("-");
    }
}
// find max no between two numbers

void max(int a, int b)
{
    if (a > b)
    {
        printf("Max is %d", a);
    }
    else
    {
        printf("Max is %d", b);
    }
}
void min(int a, int b)
{
    if (a < b)
    {
        printf("Min is %d", a);
    }
    else
    {
        printf("Min is %d", b);
    }
}
int main()
{
    function(3, 4);
    printf("\n");

    printf("Hello C Programme");
    printf("\n");
    function(3, 5);
    // max function called;
    printf("\n");

    max(-15,-17);
    printf("\n");

    min(5,10); 
    printf("\n");

    min(-15,-17);
    printf("\n");

    max(15,10); 

    return 0;
}
