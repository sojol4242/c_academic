#include <stdio.h>
int main()
{

 /*
    Programming is all about play with various types of data. we have many types of data types for storing data.
    Each variable in C has an associated data type. Each data type requires different amounts of memory and has some specific operations which can be performed over it.
    
   Type of Data type
   Basic Data Type >	int, char, float, double;

   Derived Data Type >	array, pointer, structure, union;

   Enumeration Data Type>	enum;

   Void Data Type>	void;
*/

    int a = 65;
    char b = 'S';
    double c = 65.746;

    // above int, double, char are data types
    // We can use the sizeof() operator to check the size of a variable. See the following C program for the usage of the various data types:

    printf("Hello Data Types\n");

    // printing the variables defined
    // above along with their sizes
    printf("Value is %c and "
           " size is %lu byte.\n",
           b, sizeof(char));
    // can use sizeof(b) above as well

    printf("Value is %d and "
           "Size is %lu  bytes.\n",
           a, sizeof(int));
    // can use sizeof(a) above as well

    printf(
        " Value is %lf and Size is %lu bytes.\n",
        c, sizeof(double));
    // can use sizeof(c) above as well

    printf("That is the base of Data Types in C\n");

    //  [ Learn More<a href="https://www.javatpoint.com/data-types-in-c"> Here⏩</a>]

    return 0;
}