#include <stdio.h>

int main()
{

    // if any one can print their output based on true or false condition then the Conditional Operator comes in.

    /*
 they are also called ternary operators
 exp1? exp2: exp3

 ex1> here exp1 is condition of operator it could be true or false. and base on this exp1 we can print our output.

 exp2> if exp1 has true value then exp2 will be executed

 exp3> if exp1 has false value then exp3 will be executed

 this is the summery of conditional operator.

*/
    // example 1

    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    printf("Age = %d\n", age);
    age >= 18 ? printf("He/she is a Voter \n") : printf("He/she is not able to attend Vote\n");

    // example 2
    int marks, result;
    printf("Enter your marks ");
    scanf("%d", &marks);
    printf("marks = %d\n", marks);

    marks > 40 ? printf("WOW!! You passed in Mid-term\n") : printf("SORRY!! You couldn't pass in Mid Term\n");

    // printf("%d", x);
    return 0;
}