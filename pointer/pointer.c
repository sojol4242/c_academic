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
#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %d\n", &var);
  //Here, the address of c is assigned to the pc pointer. To get the value stored in that address, we used *pc.
      int x, y,*ptr;
      x=10;
      ptr=&x;
      y=*ptr;

     printf("address of %d is: %u\n",x, &x);
     printf("address of %d is: %u\n",*&x, &x);
     printf("address of %d is: %u\n",*ptr,ptr);
       printf("address of %d is: %u\n",ptr,&ptr);
     printf("address of %d is: %u\n",y,&y);
     *ptr=25;
          printf("\n Now x= %d \n",x);

  return 0;
#include <stdio.h>
/*
pointer
*/
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
