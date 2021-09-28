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
// example :
#include <stdio.h>
#include <string.h>
// create struct with person1 variable
struct Person
{
    char name[50];
    int idNo;
    float salary;
} person1;

int main()
{
    // // assign value to name of person1
    // strcpy(person1.name, "Sayam Chowdhury");
    printf("Enter City name ");
    scanf("%[^\n]%*c",person1.name);
    // get input and assign values to other person1 variables
    printf("Enter Id ");
    scanf("%d",&person1.idNo);
    printf("Enter salary ");
    scanf("%f",&person1.salary);
    // print struct variables
    printf("ID: %d,\nName: %s,\nSalary:%.2f\n", person1.idNo,person1.name, person1.salary);

}
/*
Why Structure in C:
Suppose, you want to store information about a person: his/her name, citizenship number, and salary. You can create different variables name, citNo and salary to store this information.

What if you need to store information of more than one person? Now, you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2, etc.

A better approach would be to have a collection of all related information under a single name Person structure and use it for every person.
*/


