#include <stdio.h>
#include <string.h>
void main()
{
    // char s[] = "javatpoint the point is best";
    // printf("%d\n",s);
    // printf("%s\n",s);
    // int i = 0;
    // int count = 0;
    // // while (i <= strlen(s))
    // while (s[i] !=NULL)
    // {
    //     if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
    //     {

    //         printf("%c ", s[i]);
    //         count++;
    //     }
    //     i++;
    // }
    // printf("The number of vowels %d", count);

    char *p = "hello javatpoint";
    printf("String p: %s\n", p);
    char *q;
    printf("copying the content of p into q...\n");
    q = p;
    printf("String q: %s\n", q);
}