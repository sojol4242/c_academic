#include <stdio.h>
/*
Pointers are powerful features of C and C++ programming. Before we learn pointers, let's learn about addresses in C programming.

Address in C
If you have a variable var in your program, &var will give you its address in the memory.
We have used address numerous times while using the scanf() function.
scanf("%d", &var);

Here, the value entered by the user is stored in the address of var variable. Let's take a working example.
Example 1;
*/
/*
C Pointers
Pointers (pointer variables) are special variables that are used to store addresses rather than values.

Pointer Syntax
Here is how we can declare pointers.

int* p;
Here, we have declared a pointer p of int type.

You can also declare pointers in these ways.
int *p1;
int * p2;
Let's take another example of declaring pointers.

int* p1, p2;
Here, we have declared a pointer p1 and a normal variable p2.

Assigning addresses to Pointers
Let's take an example.

int* pc, c;
c = 5;
pc = &c;
Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.
*/
void square(int *n);
void swapToNumber(int a, int b);
// void swapToNumberWithTem(int a, int b);

int main()
{
  int var = 53;
  int *ptr = &var;
  int value_of_address = *ptr;

  printf("var: %d\naddress of var: %d\n", var, &var);
  // Notice the use of & before var
  printf("The %d is stored now at %d\n", value_of_address, &value_of_address);
  // Here, the address of c is assigned to the pc pointer. To get the value stored in that address, we used *pc.
  // int x, y, *ptr;
  // x = 10;
  // ptr = &x;
  // y = *ptr;

  // printf("address of %d is: %u\n", x, &x);
  // printf("address of %d is: %u\n", *&x, &x);
  // printf("address of %d is: %u\n", *ptr, ptr);
  // printf("address of %d is: %u\n", ptr, &ptr);
  // printf("address of %d is: %u\n", y, &y);
  // *ptr = 25;
  // printf("\n Now x= %d \n", x);

  // pointer to pointer
  float price = 100.00;
  float *ptr1 = &price;
  float **pptr1 = &ptr1;
  printf("%f\n", **pptr1);
  int number = 10;
  square(&number);
  printf("%d\n", number);

  int a = 10, b = 20;
  printf("Before swap %d \t %d \n", a, b);

  swapToNumber(a, b);

  return 0;
}
// call by reference
void square(int *n)
{
  *n = (*n) * (*n);
  printf("%d\n", *n);
}
// swap to number
void swapToNumber(int a, int b)
{
  //  without temp
  // int *p1 = &a, *p2 = &b;
  // *p1 = *p1 + *p2;
  // *p2 = *p1 - *p2;
  // *p1 = *p1 - *p2;
  // with temp
  // int temp;
  // temp = b;
  // b = a;
  // a= temp;
  // without temp
  a = a + b;
  b = a - b;
  a = a - b;

  // printf("After swap %d \t %d \n", *p1, *p2);
  printf("After swap with temp %d \t %d \n", a, b);
}
