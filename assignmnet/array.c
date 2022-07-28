#include <stdio.h>

void main()
{
    int numbers[8] = {110, 1, 332, 3, 74, 5, 6, 50};
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        if (numbers[i] > 50)
        {
            count++;
            printf("%d ", numbers[i]);
        }
    }
    printf("\n%d times",count);
}
