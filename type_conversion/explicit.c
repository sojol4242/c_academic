// An example of implicit conversion
#include <stdio.h>
int main()
{
    int x = 10; // integer x
    int y = 6;  // interger y
 

    // y is explicitly converted to float
    float z = x + x / (float)y;

    printf("z = %.3f",  z);
    return 0;
}