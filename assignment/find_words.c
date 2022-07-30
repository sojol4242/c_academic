#include <stdio.h>
#include <string.h>
int main()
{

    char sentence[200];
    int count = 0;
    gets(sentence);
    char *word = strtok(sentence, " ");
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

    if (count > 0)
    {
        printf("%d words contain both a and c char\n", count);
    } 
    else
    {
         printf("There is no words containing a and c \n");
    }
    

    return 0;
}