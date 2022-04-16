#include <stdio.h>
#include <string.h>

int main()

{

    char src[200] = "After";

    char dest[200] = "Before";

    // strcat(dest, src);
    // puts(dest);
    // printf("length is %d\n", strlen(dest));
    // strcpy(dest, src);
    // puts(dest);
    int a = strcmp(dest, src);
    printf("%d", a);
    return 0;
}