/*
In this tutorial, you'll learn about struct types in C Programming with the help of examples.

In C programming, a struct (or structure) is a collection of variables (can be of different types) under a single name.

*/

/*
Define Structures:
Before you can create structure variables, you need to define its data type. To define a struct, the struct keyword is used.

Syntax of struct:
struct structureName {
  dataType member1;
  dataType member2;
  ...
};
For example,

struct Person {
  char name[50];
  int citNo;
  float salary;
};
*/
// example code :
#include <stdio.h>
// create struct with person1 variable
struct Person
{
  char name[50];
  int age;
};

int main()
{
  // declare struct variable
  struct Person person;
  printf("Enter name\n");
  scanf("%s",person.name);
  printf("Enter age\n");
  scanf("%d",&person.age);
  printf("Name: %s\nAge: %d\n", person.name, person.age);
}
/*
Why Structure in C:
Suppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables name, citNo and salary to store this information.

What if you need to store information of more than one person? Now, you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2, etc.

A better approach would be to have a collection of all related information under a single name Person structure and use it for every person.
*/

/*
Why Structure in C:
Suppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables name, citNo and salary to store this information.

What if you need to store information of more than one person? Now, you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2, etc.

A better approach would be to have a collection of all related information under a single name Person structure and use it for every person.
*/

//  another example:
/*
#include <stdio.h>
#include <string.h>
struct employee {
 char name[100];
 int age;
 float salary;
 char department[50];
}  employee_one, *ptr;

int main(){
//   struct ;

   printf("Enter Name, Age, Salary and Department of Employee\n");
   scanf("%s %d %f %s", &employee_one.name, &employee_one.age,
       &employee_one.salary, &employee_one.department);

//   Printing structure members using dot operator
   printf("Employee Details\n");
   printf(" Name : %s\n Age : %d\n Salary = %f\n Dept : %s\n",
       employee_one.name, employee_one.age, employee_one.salary,
       employee_one.department);

//  Printing structure members using arrow operator
   ptr = &employee_one;
   printf("\nEmployee Details\n");
   printf(" Name : %s\n Age : %d\n Salary = %f\n Dept : %s\n",
       ptr->name, ptr->age, ptr->salary, ptr->department);

   return 0;
}

*/
