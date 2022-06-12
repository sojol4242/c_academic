#include <stdio.h>;
// definition of function deltaToWye
void deltaToWye(double a, double b, double c, double arr[]);
// definition of function printLn
void printLn(char ch, int lenght);

// user define function for Delta to Wye conversion (definition)
void deltaToWye(double a, double b, double c, double arr[])
{
    arr[0] = (b * c) / (a + b + c);
    arr[1] = (c * a) / (a + b + c);
    arr[2] = (a * b) / (a + b + c);
}

// user define function for draw line (definition)
void printLn(char ch, int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        printf("%c", ch);
    }
    printf("\n");
}

// driver function
int main()
{
    double x, y, z;
    double array[3];
    // take input from user;
    printf("Enter Ra= ");
    scanf("%lf", &x);
    printf("Enter Rb= ");
    scanf("%lf", &y);
    printf("Enter Rc= ");
    scanf("%lf", &z);

    // call the detaToWye function;
    deltaToWye(x, y, z, array);
    // call the printLn function;
    printLn('*', 30);
    printf("Y Equivalent Circuit Resistors are\n");
    // call the printLn function;
    printLn('-', 30);
    printf("R1=%.2lf\nR2=%.2lf\nR3=%.2lf\n", array[0], array[1], array[2]);
    // call the printLn function;
    printLn('*', 30);
    return 0;
}
