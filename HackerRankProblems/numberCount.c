#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_ARR_SIZE 1001

int main()
{

    char string[MAX_ARR_SIZE];
    scanf("\n%[^\n]%*c", string);
    int arr[10] = {0};
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            arr[string[i] - '0']++;
        }
        }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
