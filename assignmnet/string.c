#include <stdio.h>
#include <string.h>

int main()
{
    int cnt1 = 1, cnt2 = 1;
    char str1[100];
    char str2[100];
    printf("Enter sentence 1: ");
    gets(str1);
    printf("Enter sentence 2: ");
    gets(str2);

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == ' ' || str1[i] == '\n' || str1[i] == '\t')
        {
            cnt1++;
        }
    }
    // printf("Sentence 1 has %d words\n", cnt1);
    for (int i = 0; i < strlen(str1); i++)
    {
        if (str2[i] == ' ' || str2[i] == '\n' || str2[i] == '\t')
        {
            cnt2++;
        }
    }
    // printf("Sentence 2 has %d words\n", cnt2);
    if (cnt1 == cnt2)
    {
        printf("Both have same number of words\n");
    }
    else if (cnt1 < cnt2)
    {
        {
            printf("Sentence 2 contains more words\n");
        }
    }
    else
    {
        printf("Sentence 1 contain max words\n");
    }

    return 0;
}