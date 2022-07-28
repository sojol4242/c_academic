#include <stdio.h>
void value(int arr[], int size);
void value_dis(int arr[], int size);
// #include <stdio.h>
// void countRepeatedDigit(int N);
// int main()
// {

//     int N;

//     printf("Enter the number:");
//     scanf("%d", &N);
//     countRepeatedDigit(N);
//     return 0;
// }

// // count repeatedDigit;
// void countRepeatedDigit(int N)
// {
//     int seen[10] = {0};
//     int rem;
//     while (N > 0)
//     {
//         rem = N % 10;
//         seen[rem] += 1;
//         N = N / 10;
//     }

//     for (int i = 0; i < 10; i++)
//     { // checking the number seen counts
//         if (seen[i] == 0)
//         {
//             continue;
//         }
//         printf("%d seen %d times\n", i, seen[i]); // just returned the given numbers informations
//     }
// }

int main()
{
    int size; // array size
    int arr[size];
    printf("Enter the value of arr size ");
    scanf("%d",&size); // input array size
   

    // value(arr, size);

    // value_dis(arr, size);

    return 0;
}

void value(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Enter array value\n");
        scanf("%d", &arr[i]); // input array value
    }
}

void value_dis(int arr[], int size)
{

    for (int i = 0; i < size; i++) // output array value
    {
        printf("Value of array is \n");
        printf("%d \n", arr[i]);
    }
 
}