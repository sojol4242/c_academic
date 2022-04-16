#include <stdio.h>
#include <string.h>
int countLength(char name[]);
int main(int argc, char const *argv[])
{
    //   char s;
    // s = getchar();
    // printf("%c", s);
    // char name1[200]; // cannot be re-initialized
    // printf("Enter name: ");
    // scanf("%s", name);
    // gets(name);
    // fgets(name, 200, stdin);
    // printf("Your name is ");
    // puts(name);
    char name[200]; // can be re-initialized
                    // gets(name);
    // printf("Enter Name : ");
    // fgets(name, 200, stdin);
    // gets(name);
    // scanf("%[^\n]s", name);
    // printf("Your name is ");
    // puts(name);
    // name = "Changed Hello World";

    // puts(name);
    // printf("Length = %d\n", countLength(name));
    // char name1[10];
    // scanf("%5s", name1);
    // printf("%s", name1);

    // char str1[10] = "192982";
    // int s = atoi(str1);
    // printf("%s converted to %d", str1, s);
    char str[100] = "this is javatpoint with c and java";
    char *sub;
    sub = strstr(str, "java");
    if (sub == NULL)
    {
        printf("Substring not found");
    }
    else
    {
        printf("Found\n");
        // printf("%s is sub of %s\n", sub, str);
    }

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