#include <stdio.h>
#define MAXSIZE 15
// Array is a basic data structure for storing data in one dimension and two dimension. 👇

/* state: Arrays are the derived data type in C programming language which can store the primitive type of data such as int, char, double, float, etc. ...The array is the simplest data structure where each data element can be randomly accessed by using its index number. C array is beneficial if you have to store similar elements.
There are some types of arrays exists:
1. One Dimensional Arrays
2. Multi-dimensional arrays(2D,3D etc.)
src : google */

/*
basic of array:
declare a array:
dataType arrayName[arraySize];
example: int mark[5];
*/

/*
initialize an array: int mark[5] = {19, 10, 8, 17, 9};
Here, we declared an array, mark. And its size is 5.
*/

/*
access array element:
we can access the array element. like we nee the 3rd element of mark array
printf("%d",mark[2]); // array index start with 0 ;
*/

// that is how we play with an array ;

// Example 1 👇;

/*
int main(){
int arr[]={1,2,3,5}; // size of array is 4
int i;
if we want access 3 you should follow below code.

printf("How to access single array element: \n");
printf("%d\n",arr[2]); // output 3

if we want access all array elements we can do it through loops;
printf("How to access all array element: \n");
 for(i = 0; i <=3; ++i){
      printf("%d \n",arr[i]);
 }

}
*/
//    example;
#include <stdio.h>
int takeInput(int n);
void mTable(int arr[10][3], int mul, int n);
void repeatedDigit();
int main()
{

    // int arr[10][3], mul = 1;
    // int n = takeInput(n);
    // printf("Table of %d\n", n);
    // mTable(arr, mul, n);
    repeatedDigit();

    return 0;
}

// multidimensional array
// Multiplication-table making

void mTable(int arr[10][3], int mul, int n)
{
    for (int i = 0; i <= 9; i++)
    {
        arr[i][0] = mul++;
        arr[i][1] = n;
        arr[i][2] = arr[i][0] * arr[i][1];
        printf("%d X %d = %d\n", arr[i][0], arr[i][1], arr[i][2]);
    }
}
int takeInput(int n)
{
    printf("Which Multiplication Table you want to :)\n");
    scanf("%d", &n);
    printf("%d\n", n);
    return n;
}
// int marks[MAXSIZE];
// float average = 0;
// int i, n, sum = 0;
// printf("Enter number of elements: ");
// scanf("%d", &n);

// for (i = 0; i < n; i++)
// {
//     printf("Enter Subject Number %d: \n", i + 1);
//     scanf("%d", &marks[i]);
// }
// printf("Marks \n");
// for (int i = 0; i < n; i++)
// {

//     printf("%d\n", marks[i]);
// }
// for (int i = 0; i < n; i++)
// {

// adding integers entered by the user to the sum variable
//     sum += marks[i];
// }

// average = sum / n;

// printf("Total Mark = %d\n", sum);
// printf("Your Average Mark= %.2f\n", average);

// pointer arithmetic
// int age = 22;
// int *ptr = &age;
// printf("ptr =%u\n", ptr);
// ptr++;
// printf("ptr =%u\n", ptr);
// ptr--;
// printf("ptr =%u\n", ptr);
// function for repeatedDigit;

void repeatedDigit()
{

    int n;
    scanf("%d", n);
    printf("%d\n", n);
}
