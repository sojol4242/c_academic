
#include <stdio.h>
int min(int arr[], int size);
int max(int arr[], int size);

int main(int argc, char const *argv[])
{

    int arr[] = {51,
                 2,
                 943,
                 74,
                 975,
                 6,
                 15, 56, 4, 7, 35, 7};

    int minimum = min(arr, sizeof(arr) / sizeof(arr[0]));
    int maximum = max(arr, sizeof(arr) / sizeof(arr[0]));
    // int len=sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", len);
    printf("min %d\n", minimum);
    printf("max %d", maximum);
    return 0;
}

int min(int arr[], int size)
{
    int min = arr[0];
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }
    printf("min value holder index %d\n", minIndex);
    return min;
}
int max(int arr[], int size)
{
    int max = arr[0];
    int maxIndex = 0;

    for (int i = 0; i < size; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("max value holder index %d\n", maxIndex);

    return max;
}