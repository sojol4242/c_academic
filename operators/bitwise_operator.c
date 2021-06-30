#include <stdio.h>
int main()
{
    /*
    The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different
    */
    //    examples
    int a = 12, b = 25;
    printf("Output = %d\n", a & b);
    printf("Output = %d\n", a | b);
    printf("Output = %d\n", a << b);
    printf("Output = %d\n", a >> b);
    printf("Output = %d\n", a ^ b);
    printf("Output = %d\n", ~a);

    int num = 212;
    for (int i = 0; i <= 2; ++i)
        printf("Right shift by %d: %d\n", i, num >> i);

    printf("\n");

    for (int i = 0; i <= 2; ++i)
        printf("Left shift by %d: %d\n", i, num << i);

    return 0;
}