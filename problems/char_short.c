
#include <stdio.h>
#include <string.h>
// void stringInput(char str[]);
// void stringSorter(char str[]);
void main()
{
    char str[150];

    stringInput(str);

    printf("String is %s \n", str);
    printf("length is %d \n", strlen(str));
    stringSorter(str, strlen(str));
    printf("The sorted string is %s", str);
    getch();
}

void stringInput(char str[])
{
    printf("Enter a string \n");
    // scanf("%s", &str);
    gets(str);
}
void stringSorter(char str[], int length)
{
    char temp_c;
    for (int i = 0; i <= (length - 2); i++)
    {
        for (int j = i; j <= (length - 2); j++)
        {
            if (str[i] > str[j + 1])
            {
                temp_c = str[i];
                str[i] = str[j + 1];
                str[j + 1] = temp_c;
            }
        }
    }
}