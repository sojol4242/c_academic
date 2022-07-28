#include <stdio.h>
#include <string.h>
int main()
{

    char words[200];
    int count = 0;
    gets(words);
    char *word = strtok(words, " ");
    char *a, *c;
    while (word != NULL)
    {

        a = strchr(word, 'a');
        c = strchr(word, 'c');
        if (a && c)
        {
            printf("%s\n", word);
            count++;
        }

        word = strtok(NULL, " ");
    }

    if (count == 0)
    {
        printf("There is no words containing a and c \n");
    }
    else
    {
        printf("%d words contain both a and c char\n", count);
    }

    return 0;
}