#include <stdio.h>
int main()
{
    /*
    The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different
    */
    //    examples
    int a = 7, b = 8;
    printf("And = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("Left Shift = %d\n", a << b);
    printf("Right Shift = %d\n", a >> b);
    printf("X-OR = %d\n", a ^ b);
    printf("Not = %d\n", ~a);

    int var = 3;

    for (int i = 0; i <= 5; i++)
        // left shift = var * 2^i(how many bits are shifted left)
        printf("Left shift by %d: %d\n", i, var << i);

    printf("\n");

    for (int i = 0; i <= 5; i++)
        // right shift = var /2^i(how many bits are shifted right)
        printf("Right shift by %d: %d\n", i, var >> i);

    int c, d;
    scanf("%d \n%d", &c, &d);
    c = c ^ d;
    d = c ^ d;
    c = c ^ d;
    printf("c=%d\nd=%d\n", c, d);

    return 0;
}