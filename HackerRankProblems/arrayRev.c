#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, tmp;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for (i = num - 1; i >= 0; i--)
    {
        // tmp = arr[i];
        // // int fValue = arr[i], sValue = arr[num - i - 1];
        // arr[i] = arr[num - i - 1];
        // arr[num - i - 1] = tmp;
        // arr[i] = sValue;
        // arr[num - i - 1] = fValue;
        printf("%d ", arr[i]);
    }

    return 0;
}