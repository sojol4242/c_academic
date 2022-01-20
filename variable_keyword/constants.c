#include <stdio.h>  // link section
#define PI 3.14  
int main()
 // main function. All programme runs here
{
    const float pi=(float)22/7;
    printf("Value of PI is %f (from local var) \n", pi);
    printf("Value of PI is %f (from define var) \n", PI);
//  Compile Time Error: Cannot modify a const object

    return 0;  
}
