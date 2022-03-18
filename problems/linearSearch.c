// linear search
#include <stdio.h>
#define MAX_SIZE 100
int linearSearch(int a[], int searchItem, int size);
int peakElement();
void minmax(int arr[], int n);
int main()
{

    int arr[MAX_SIZE];
    int size, searchItem;

    printf("Enter Array Size \n");
    scanf("%d", &size);
    printf("Enter Array Elements \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printf("Enter search item \n");
    // scanf("%d", &searchItem);

    // linearSearch(arr, searchItem, size);
    int peak = peakElement(arr, size);
    printf("Max value in %d position\n", peak);
    minmax(arr, size);

    return 0;
}

int linearSearch(int a[], int searchItem, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == searchItem)
        {
            printf("%d found at position %d\n", a[i], i);
            return 0;
        }
    }

    printf("%d not found.", searchItem);
    return 0;
}

int peakElement(int arr[], int n)
{
    int max = arr[0];
    int max_index;
    for (int i = 1; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

void minmax(int arr[], int n)
{

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 1; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("min = %d, max=  %d", min, max);
}