#include <stdio.h>
void countRepeatedDigit(int N);
int main()
{

    int N;

    printf("Enter the number:");
    scanf("%d", &N);
    countRepeatedDigit(N);
    return 0;
}

// count repeatedDigit;
void countRepeatedDigit(int N)
{
    int seen[10] = {0};
    int rem;
    while (N > 0)
    {
        rem = N % 10;
        seen[rem] += 1;
        N = N / 10;
    }

    for (int i = 0; i < 10; i++)
    { // checking the number seen counts
        if (seen[i] == 0)
        {
            continue;
        }
        printf("%d seen %d times\n", i, seen[i]); // just returned the given numbers informations
    }
}