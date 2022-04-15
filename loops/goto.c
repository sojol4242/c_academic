#include <stdio.h>
// int main()
// {
//     int i = 1;
// print:
//     printf("%d\t", i);
//     i++;
//     if (i < 50)
//     {
//         goto print; // call goto
//     }
//     return 0;
// }
int main()
{
    int num, i = 1;
    printf("Enter the number whose table you want to print?\n");
    scanf("%d", &num);
table:
    printf("%d x %d = %d\n", num, i, num * i);
    i++;
    if (i <= 15)
        goto table;
}