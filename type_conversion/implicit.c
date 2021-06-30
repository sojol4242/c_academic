// An example of implicit conversion
#include<stdio.h>
int main()
{
    int x = 2;    // integer x
    char y = 'b';  // character c
  
    /*y implicitly converted to int. ASCII 
    value of 'a' is 97*/
    x = x + y;
     
    // x is implicitly converted to float
    float z = x + 1.0;
  
    printf("x = %d, z = %.2f", x, z);
    return 0;
}