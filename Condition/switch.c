#include <stdio.h>

/*
A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.

#include <stdio.h>
int main()
{
     int num=2;
     switch(num+2)
     {
         case 1:
           printf("Case1: Value is: %d", num);
         case 2:
           printf("Case1: Value is: %d", num);
         case 3:
           printf("Case1: Value is: %d", num);
         default:
           printf("Default: Value is: %d", num);
    }
    return 0;
}
Output:

Default: value is: 2

In switch I gave an expression, you can give variable also. I gave num+2, where num value is 2 and after addition the expression resulted 4. Since there is no case defined with value 4 the default case is executed.

Break statement in Switch Case:
Break statements are useful when you want your program-flow to come out of the switch body. Whenever a break statement is encountered in the switch body, the control comes out of the switch case statement.
*/
// int main()
// {

//   char selection;
//   int quantity, total;
//   int vat = 30;

//   printf("B=BURGER\nF=FRENCH FRY\nP=PIZZA\nS=SANDWICHES or select any character for nothing\n");
//   printf("Select Your Snacks\n");
//   // scanf("%c", &selection);
//   selection = getchar();
//   printf("Quantity(In integer number) \n");
//   scanf("%d", &quantity);

//   switch (selection)
//   {
//   case 'B':
//   case 'b':
//     printf("Your Select Food is %c = Burger\n", selection);
//     printf("Single price 230\n");
//     printf("Quantity %d\n", quantity);
//     total = quantity * 230 + vat;
//     printf("Total %d", total);
//     break;
//   case 'F':
//   case 'f':
//     printf("Your Select Food is %c = French Fries\n", selection);
//     printf("Single price 43\n");
//     printf("Quantity %d\n", quantity);
//     total = quantity * 43 + vat;
//     printf("Total %d", total);
//     break;
//   case 'P':
//   case 'p':
//     printf("Your Select Food is %c = Pizza\n", selection);
//     printf("Single price 450\n");
//     printf("Quantity %d\n", quantity);
//     total = quantity * 450 + vat;
//     printf("Total %d", total);
//     break;
//   case 'S':
//   case 's':
//     printf("Your Select Food is %c=SANDWICHES\n", selection);
//     printf("Single price 130\n");
//     printf("Quantity %d\n", quantity);
//     total = quantity * 130 + vat;
//     printf("Total %d", total);
//     break;
//   default:
//     printf("None of this\n please select some snacks");
//   }

//   return 0;
// }
int main(int argc, char const *argv[])

{
  int x = printf("HELLO..");
  switch (x)
  {
  case 6:
    printf("Case1: Value is: 6");
    break;
  case 7:
    printf("Case1: Value is: 7\n");

    break;
  case 8:
    printf("Case1: Value is: 8");
    break;

  default:
    break;
  }
}