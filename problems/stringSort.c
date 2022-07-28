// Sort string alphabetically(A_Z)
#include <stdio.h>
#include <string.h>
#define MAX_ARR_SIZE 30
#define MAX_NAME_SIZE 100
// function definition
void sortString();
void output();
// main function
int main()
{
    int count;
    char str[MAX_ARR_SIZE][MAX_NAME_SIZE];
    puts("How many students name you want to get?");
    scanf("%d", &count);
    // nameInput(str, count);

    puts("Enter students name one by one: ");
    for (int i = 0; i <= count; i++)
    {
        scanf("%s", str[i]);
        // gets(str);
    }
    sortString(str, count);
    output(str, count);
    return 0;
}
void sortString(char str[][MAX_NAME_SIZE], int count)
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
void output(char str[][MAX_NAME_SIZE], int count)
{
    printf("Order of Sorted names: \n");
    for (int i = 0; i <= count; i++)
    {

        // puts(str);
        printf("%s\n", str[i]);
    }
}