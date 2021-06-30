// When we want to see some output based on our logic then logical operator comes in C. It basically works with true or false value.
#include <stdio.h>

int main()
{
  /* 
Logical operators are designed for operations with the true or false values within the logical expressions.  there are three logical operators:



&& (logical AND): (logical AND) used to combine two condition;
if two condition are true the logical AND gives us true value otherwise it gives false value.


||(logical OR): (logical OR) used to combine two condition;
if one or two condition are true the logical OR gives true value otherwise it gives false value


! (logical NOT): logical NOT used to compliment the condition under consideration. Thats mea it returns false if the condition is true and vise versa

*/

  int a = 10, b = 4, c = 10, d = 20;

  // logical operators

  // logical AND example
  if (a > b && c == d)
    printf("a is greater than b AND c is equal to d\n");
  else
    printf("AND condition not satisfied\n");

  // logical AND example
  if (a > b || c == d)
    printf("a is greater than b OR c is equal to d\n");
  else
    printf("Neither a is greater than b nor c is equal "
           " to d\n");

  // logical NOT example
  if (!a)
    printf("a is zero\n");
  else
    printf("a is not zero");


// logical AND
  int number = 47;

  if (number >= 80)
  {
    printf("\nYou got A+ = %d\n", number);
  }
  else if (number >= 70 && number < 80)
  {
    printf("\nYou got A = %d\n", number);
  }
  else if (number >= 60 && number < 70)
  {
    printf("\nYou got A- = %d\n", number);
  }
  else if (number >= 50 && number < 60)
  {
    printf("You got B = %d", number);
  }
  else if (number >= 40 && number < 50)
  {
    printf("\nYou got C = %d\n", number);
  }
  else
  {
    printf("\nYou Failed = %d\n", number);
  }
  return 0;
}
