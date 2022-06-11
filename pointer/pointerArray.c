#include <stdio.h>
int main()
{
    // int *pc, c;
    // c = 5;
    // pc = &c;
    // c = 1;
    //  printf("%d %d %u", c,*pc,pc); // Ouptut: 1
    // int *pc, c, d,e;
    // c = 5;
    // d = -15;
    // e = 4;

    // pc = &c;
    // printf("%u ", pc);
    // pc = &d;

    // printf("%u ", pc);
    // pc = &e;
    // printf("%u", pc);
    int i, x[6];
    int sum = 0;
    int mul = 1;
    printf("Enter 6 numbers: ");

    for (i = 0; i < 6; i++)
    {
        // Equivalent to scanf("%d", &x[i]);
        scanf("%d", x + i);
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", *(x + i));
        sum += *(x + i);
        mul *= *(x + i);
    }
    printf("\nSum of above numbers: %d ", sum);
    printf("\nSum of above numbers: %d ", mul);
    return 0;
}