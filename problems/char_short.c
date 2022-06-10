
#include <stdio.h>
#include <string.h>
void stringInput();
void stringSorter();
void main()
{
    char str[150];

    stringInput(str);
    printf("String is %s \n", str);
    stringSorter(str);

    getch();
}

void stringInput(char str[])
{
    printf("Enter a string \n");
    // scanf("%s", &str);
    gets(str);
}
void stringSorter(char str[])
{
    char temp_c;
    // Calculating length of string
    int len = strlen(str);

    // Swapping the characters string if previous is greater later
    for (int i = 0; i < (len - 1); i++)
    {
        for (int j = (i + 1); j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp_c = str[i];
                str[i] = str[j];
                str[j] = temp_c;
            }
        }
    }
    printf("Sorted String is %s \n", str);
}
