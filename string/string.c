#include <stdio.h>
#include <string.h>
int countLength(char name[]);
int main(int argc, char const *argv[])
{
    // char name1[200]; // cannot be re-initialized
    // printf("Enter name: ");
    // scanf("%s", name);
    // gets(name);
    // fgets(name, 200, stdin);
    // printf("Your name is ");
    // puts(name);
    char name[200]; // can be re-initialized
                    // gets(name);
    printf("Enter Name");
    fgets(name, 200, stdin);
    // printf("Your name is ");
    // puts(name);
    // name = "Changed Hello World";

    puts(name);
    printf("Length = %d", countLength(name));
    return 0;
}

int countLength(char name[])
{
    int length = 0;

    for (int i = 0; i < name[i] != '\0'; i++)
    {

        length++;
    }
    return length - 1;
}