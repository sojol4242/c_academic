#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *strings[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // printf("%s\n", strings[0]);
    int n;
    scanf("%d", &n);
    if (n >= 1 && n <= 9)
    {
        printf("%s", strings[n - 1]);
    }
    else
    {
        printf("Greater than 9");
    }

    return 0;
}
