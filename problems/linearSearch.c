// linear search
#include <stdio.h>
#define MAX_SIZE 100
int linearSearch(int a[], int searchItem);
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
    printf("Enter search item \n");
    scanf("%d", &searchItem);

    linearSearch(arr, searchItem);

    return 0;
}

int linearSearch(int a[], int searchItem)
{
    int i;
    for (i = 0; i < 6; i++)
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
