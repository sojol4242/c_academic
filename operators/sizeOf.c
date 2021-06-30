// The sizeof operator is the most common operator in C. It is a compile-time unary operator and used to compute the size of its operand. It returns the size of a variable. It can be applied to any data type, float type, pointer type variable
#include <stdio.h>
int main()
{
    int a;
    short s;
    float f;
    double d;
    char c;
    long l;
    long long ll;

    printf("Size of short= %lu bytes\n", sizeof(s));
    printf("Size of int= %lu bytes\n", sizeof(a));
    printf("Size of float= %lu bytes\n", sizeof(f));
    printf("Size of double= %lu byte\n", sizeof(d));
    printf("Size of long= %lu byte\n", sizeof(l));
    printf("Size of long long= %lu byte\n", sizeof(ll));

    return 0;
}