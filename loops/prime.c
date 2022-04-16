#include <stdio.h>

int main(int argc, char const *argv[])
{
    int range, total = 0;
    // scanf("%d", &num);
    scanf("%d", &range);
    for (int k = 2; k <= range; k++)
    {
        int count = 0;
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                count++;
                break;
            }
        }
        // printf("%d\n", count);

        if (count == 0)
        {
            printf("Prime %8d\n", k);
            total++;
        }
        else
        {
            printf("Not prime %4d\n", k);
        }
    }
    printf("Total prime %d\n", total);
    return 0;
}
