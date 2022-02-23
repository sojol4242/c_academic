#include <stdio.h>
#include <string.h>
#define MAX_ARR_SIZE 20;
#define MAX_NAME_SIZE 100;

int main()
{
    int i, j, count;
    char str[MAX_ARR_SIZE][MAX_NAME_SIZE], temp[MAX_NAME_SIZE];
    puts("How many students name you want to get?\n ");
    scanf("%d", &count);

    puts("Enter students name one by one: \n");
    for (i = 0; i <= count; i++)
    {
        gets(str[i]);
    }
    for (i = 0; i <= count; i++)
    {
        for (j = i + 1; j <= count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Order of Sorted Students:");
    for (i = 0; i <= count; i++)
    {
        puts(str[i]);
    }

    return 0;
}