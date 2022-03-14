#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *strings[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%d\n", strlen(strings));
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if ((i > 0) && (i < 10))
            printf("%s\n", strings[i - 1]);
        else
            printf("%s\n", (i % 2) ? "odd" : "even");
    }

    return 0;
}
