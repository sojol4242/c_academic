#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20] = "MD Moniruzzaman";
    char ch2[20];
    printf("%s is a copy of string", strcpy(ch2, ch));
    return 0;
}