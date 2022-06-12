// static and dynamic scoping
// A c program to demonstrate static scoping.
#include <stdio.h>
int x = 10;

// Called by g()
int f()
{
    return x;
}

// g() has its own variable
// named as x and calls f()
int g()
{
    int x = f();
    x=20;
    return x;
}

int main()
{
    printf("%d", g());
     
    return 0;
}
