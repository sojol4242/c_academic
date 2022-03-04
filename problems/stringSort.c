#include <stdio.h>
#include <string.h>
#define MAX_ARR_SIZE 20;
#define MAX_NAME_SIZE 100;

void nameInput(char str[], int count);
void sortString(char str[], int count);
void output(char str[], int count);

int main()
{
    int i, j, count;
    char str[MAX_ARR_SIZE][MAX_NAME_SIZE], temp[MAX_NAME_SIZE];

    nameInput(str, count);
    sortString(str, count);
    output(str, count);

    return 0;
}
// input function
void nameInput(char str[], int count)
{
    puts("How many name you want to get?");
    scanf("%d", &count);
    puts("Enter name one by one:");
    for (int i = 0; i <= count; i++)
    {
        gets(str[i]);
    }
}
// sorter function
void sortString(char str[], int count)
{
    char temp[MAX_NAME_SIZE];
    for (int i = 0; i <= count; i++)
    {
        for (int j = i + 1; j <= count; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}
// output function
void output(char str[], int count)
{
    printf("Order of Sorted names: ");
    for (int i = 0; i <= count; i++)
    {
        puts(str[i]);
    }
}
