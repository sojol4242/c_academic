#include <stdio.h>
int quantityInput(int quantity);
int calculate_snacks_budget(char c);

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
int main()
{

  char selection;
  printf("B=BURGER\nF=FRENCH FRY\nP=PIZZA\nS=SANDWICHES or select any character for nothing\n");
  printf("Select Your Snacks\n");
  scanf("%c", &selection);
  calculate_snacks_budget(selection);
 
  return 0;
}
int calculate_snacks_budget(char c)
{
  int quantity, total;
  int vat, per_piece_price;
  switch (c)
  {

  case 'B':
  case 'b':
 
    printf("Your Select Food is %c = Burger\n", c);
    quantity = quantityInput(quantity);
    per_piece_price = 230;
    vat = 23;
    printf("Per piece price %d\n", per_piece_price);
    printf("Quantity %d\n", quantity);
    total = quantity * per_piece_price + vat;
    printf("Total %d", total);
    break;
  case 'F':
  case 'f':
 
    printf("Your Select Food is %c = French Fries\n", c);
    quantity = quantityInput(quantity);
    per_piece_price = 440;
    vat = 43;
    printf("Per piece price %d\n", per_piece_price);
    printf("Quantity %d\n", quantity);
    total = quantity * per_piece_price + vat;
    printf("Total %d", total);
    break;
  case 'P':
  case 'p':
   
    printf("Your Select Food is %c = Pizza\n", c);
    quantity = quantityInput(quantity);
    per_piece_price = 1440;
    vat = 67;
    printf("Per piece price %d\n", per_piece_price);
    printf("Quantity %d\n", quantity);
    total = quantity * per_piece_price + vat;
    printf("Total %d", total);
    break;
  case 'S':
  case 's':
    
    printf("Your Select Food is %c=SANDWICHES\n", c);
    quantity = quantityInput(quantity);
    per_piece_price = 290;
    vat = 17;
    printf("Per piece price %d\n", per_piece_price);
    printf("Quantity %d\n", quantity);
    total = quantity * per_piece_price + vat;
    printf("Total %d", total);
    break;
  default:
    printf("None of this. please select some snacks");
  }
}

int quantityInput(int quantity)
{
  printf("Quantity(In integer number) \n");
  scanf("%d", &quantity);
  return quantity;
}
// int main(int argc, char const *argv[])

// {
//   int x = printf("HELLO..");
//   switch (x)
//   {
//   case 6:
//     printf("Case1: Value is: 6");
//     break;
//   case 7:
//     printf("Case1: Value is: 7\n");

//     break;
//   case 8:
//     printf("Case1: Value is: 8");
//     break;

//   default:
//     break;
//   }
// }
// int main(int argc, char const *argv[])

// {
// int marks;
// scanf("%d", &marks);
// int x = marks / 10;
// printf("%d\n", x);
// switch (x)
// {
// case 10:
// case 9:
// case 8:
// case 7:
//   printf("Grade A");
//   break;
// case 6:
//   printf("Grade B");
//   break;
// case 5:
//   printf("Grade c");

//   break;

// default:
//   printf("Marks not valid");
// }
// int x = 2, y = 1, z = 0;
// switch (y)
// {
// case 0:
//   x = 0;
//   y = 0;
// case 2:
//   x = 2;
//   z = 2;
// default:
//   x = 1;
//   y = 2;
// }

// printf("x = %d\ny = %d\nz = %d", x, y, z);

//   return 0;
// }