#include <stdio.h>
#include <string.h>
#define MAX_ARR_SIZE 30
#define MAX_NAME_SIZE 100
// function definition
void nameInput(char *str[], int count);
void sortString(char *str[], int count);
void output(char *str[], int count);
// void sortString();
// void output();
// main function
int main()
{
    int count;
    char str[MAX_ARR_SIZE][MAX_NAME_SIZE];
    puts("How many name you want to get?");
    scanf("%d", &count);

    // nameInput(str, count);
    // sortString(str, count);
    // output(str, count);

    puts("Enter name one by one:");
    for (int i = 0; i <= count; i++)
    {
        scanf("%s", str[i]);
        // gets(str);
    }
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
    printf("Order of Sorted names: ");
    for (int i = 0; i <= count; i++)
    {

        // puts(str);
        printf("%s  ", str[i]);
    }
    return 0;
}
