#include <stdio.h>
void in_mat(int arr[][3]);
void out_mat(int arr[][3]);
void out_mat_value(int arr[][3]);
void display_diag_value(int arr[][3]);
void in_mat(int arr[][3])
{

    /* array input*/
    printf("Input elements in the matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void out_mat(int arr[][3])
{
    printf("\nThe matrix is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr[i][j]);
    }
    printf("\n");
}
void out_mat_value(int arr[][3])
{
    printf("\nThe first and last column is : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");

        printf("%d\t", arr[i][0]);
        printf("%d\t", arr[i][2]);
    }
    printf("\n");
}
void display_diag_value(int arr[][3])
{
    printf("Diagonal values are : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                // sum=sum+arr[i][j];
                printf("%d ", arr[i][j]);
            }
        }
    }

    // printf("\nThe sum of diagonal elements of a square matrix = %d\n",sum);
}

void main()
{
    int arr[3][3];
    in_mat(arr);
    out_mat(arr);
    out_mat_value(arr);
    // display_diag_value(arr);
}
