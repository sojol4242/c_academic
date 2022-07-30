#include <stdio.h>

int main()
{
    int numbers[8] = {10, 81, 32, 63, 74, 5, 6, 50};
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (numbers[i] > 50)
        {
            count++;
            printf("%d ", numbers[i]);
        }
    }
    if (count>0)
    {
       printf("\n %d Numbers are greater than 50", count);
    }
    else{
        printf("\nNo values are greater than 50");
    }
    
    return 0;
}
