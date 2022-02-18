// linear search
#include <stdio.h>
int linearSearch(int a[], int searchItem);
int main()
{

    int arr[] = {3, 25, 45, 48, 7};
    int searchItem = 7;
    linearSearch(arr, item);

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
}
