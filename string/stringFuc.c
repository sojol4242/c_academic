#include <stdio.h>
#include <string.h>
void takeInput(char str[]);
void salting(char password[]);
void slice(char str[], int n, int m);
int countVowels(char str[]);
int main()
{
    // char ch[20] = "MD Moniruzzaman";
    // char ch2[20] = "Sojol";

    // printf("%s is a copy of string\n", strcpy(ch, ch2));

    // char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    // int result;

    // comparing strings str1 and str2
    // result = strcmp(str2, str1);
    // printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    // result = strcmp(str3, str2);
    // printf("strcmp(str1, str3) = %d\n", result);
    // char str[200];
    // takeInput(str);
    // printf("Your String is %s", str);

    // puts(ch2);

        // password salting
    char password[100];
    printf("Enter Password:\n");

    gets(password);
    salting(password);
    // slice strings
    int n, m;
    char str[100];

    printf("Enter String\n");
    gets(str);
    printf("Enter Start Value\n");

    scanf("%d", &n);
    printf("Enter End Value\n");

    scanf("%d", &m);
    printf("Original String\n");
    puts(str);
    // slice function
    slice(str, n, m);
    // count vowel function

    int value = countVowels(str);
    printf("Vowels is %d times", value);

    return 0;
}
// user input function
void takeInput(char str[])
{

    char ch;
    int i = 0;
    printf("Enter Your String: \n");
    for (i = 0; i <= ch != '\0'; i++)
    {
        scanf("%c", &ch);
        str[i] = ch;
    }

    str[i] = '\0';
}

// password salting

void salting(char password[])
{
    char salt[] = "bsmrstueee1920", newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
// slice function;

void slice(char str[], int n, int m)
{
    char newStr[200];
    int j = 0;
    for (int i = n; i <= m; i++, j++)
    {

        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    printf("Sliced String \n");
    puts(newStr);
}
int countVowels(char str[])
{

    int count = 0;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'B' || str[i] == 'b' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}