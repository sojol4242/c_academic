#include <stdio.h>
#include <stdlib.h>
void revArray(int arr[], int num);
int main()
{
    int num, *arr, i, tmp;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    revArray(arr, num);

    for (int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }

    /* Write the logic to reverse the array. */
    // type 2
    // for (i = num - 1; i >= 0; i--)
    // {

    //     printf("%d ", arr[i]);
    // }

    return 0;
}
void revArray(int arr[], int num)
{
    for (int i = 0; i < num / 2; i++)
    {
        int first = arr[i];
        int last = arr[num - i - 1];
        arr[i] = last;
        arr[num - i - 1] = first;
    }
}