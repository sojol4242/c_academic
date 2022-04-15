#include <stdio.h>
int main()
{
    int n, skip = 5;
    printf("Enter a integer value\n");
    scanf("%d", &n);

    // printf("Your value %d is invalid \n", n);

    while (1)
    {
        if (n < 0 || n == 0)
        {
            printf("Your value %d is invalid \n", n);
            break;
        }

        printf("Enter a integer value \n");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == skip)
        {
            // printf("skiped\n", i);
            skip = skip + 5;
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}
