#include <stdio.h>
#define MAX_SIZE 100
void takeArrayElements(int arr[], int size);
int min(int arr[], int size);
int max(int arr[], int size);
int main()
{

    int arr[MAX_SIZE];
    int n;
    printf("Enter size of the array");
    scanf("%d", &n);
    takeArrayElements(arr, n);
    int minimum = min(arr, n);
    int maximum = max(arr, n);
    // int len=sizeof(arr) / sizeof(arr[0]);
    // printf("%d\n", len);
    printf("min %d\n", minimum);
    printf("max %d", maximum);
    return 0;
}
void takeArrayElements(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
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
    // printf("min value holder index %d\n", minIndex);
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
    // printf("max value holder index %d\n", maxIndex);

    return max;
}