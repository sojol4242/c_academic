#include <stdio.h>
#include <string.h>
struct Employee
{
    int id,age,salary;
    char name[10];
    
};

int main()
{
    // declare structure variables
    struct Employee emp[5];
    printf("Enter Information of 5 employee\n");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Employee ID: \n");
        scanf("%d", &emp[i].id);// emp[i]->id;
        printf("Enter Employee Name: \n");
        scanf("%s", &emp[i].name);
        printf("Enter Employee Age: \n");
        scanf("%d", &emp[i].age);
        printf("Enter Employee Salary: \n");
        scanf("%d", &emp[i].salary);
    }
    
    printf("Employee Informations: \n");
    for (i = 0; i < 5; i++)
    {
        printf("Employee Id: %d, Employee Name: %s, Employee Age: %d, Employee Salary: %d\n", emp[i].id,emp[i].name,emp[i].age,emp[i].salary);
    }
    return 0;
}