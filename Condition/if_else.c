#include <stdio.h>
/*
If Statement
The if statement is used to check some given condition and perform some operations depending upon the correctness of that condition. It is mostly used in the scenario where we need to perform the different operations for the different conditions. The syntax of the if statement is given below.

code structure:
if(expression){
code to be executed


} */
/*
If-else Statement

The if-else statement is used to perform two operations for a single condition. The if-else statement is an extension to the if statement using which, we can perform two different operations, i.e., one is for the correctness of that condition, and the other is for the incorrectness of the condition. Here, we must notice that if and else block cannot be executed simiulteneously. Using if-else statement is always preferable since it always invokes an otherwise case with every if condition. The syntax of the if-else statement is given below.

code structure:

if(expression){
code to be executed if condition is true
}else{
code to be executed if condition is false
}
} */

/*
If else-if ladder Statement
The if-else-if ladder statement is an extension to the if-else statement. It is used in the scenario where there are multiple cases to be performed for different conditions. In if-else-if ladder statement, if a condition is true then the statements defined in the if block will be executed, otherwise if some other condition is true then the statements defined in the else-if block will be executed, at the last if none of the condition is true then the statements defined in the else block will be executed. There are multiple else-if blocks possible. It is similar to the switch case statement where the default is executed instead of else block if none of the cases is matched.



if(condition1){
code to be executed if condition1 is true
}else if(condition2){
code to be executed if condition2 is true
}

else if(condition3){
code to be executed if condition3 is true
}

...


else{
code to be executed if all the conditions are false
}
 */

// finding a number is even or odd :

// int main(){

//  int number
//  printf("Enter a number: \n");
//  scanf("%d\n", &number);

//   if (number % 2 == 0){
//         printf("%d is even number", number);
//     }
//     else{
//         printf("%d is odd number", number);
//     }
//  int m = 5;
//   if (m < 3)
//     printf("%d", m + 1);
//   else if (m < 5)
//     printf("%d", m + 2);
//   else if (m < 7)
//     printf("%d", m + 3);
//   else
//     printf("“% d”", m + 4);
//     return 0;
// }
#include <stdio.h>
int billInput(float unit);
int calculation(float unit);
int billOutput(float total_amount);
int main()
{

    float unit, total_amount;

    // printf("Enter total units consumed: \n");
    // scanf("%f", &unit);

    unit = billInput(unit);
    total_amount = calculation(unit);
    billOutput(total_amount);
    return 0;
}
// electricity bill finding function;

int billInput(float unit)
{
    printf("Enter total units consumed: \n");
    scanf("%f", &unit);
    // printf("unit in input %f\n", unit);
    printf("You consumed %.3f units\n", unit);
    return unit;
}
int calculation(float unit)
{

    float amount, total_amount, sur_charge, meter_charge;
    if (unit >= 0 && unit <= 200)
    {
        amount = unit * 5.72;
    }
    else if (unit >= 201 && unit <= 300)
    {
        amount = 1144 + (unit - 200) * 6.34;
    }

    else
    {
        amount = 748 + (unit - 300) * 11.46;
    }

    sur_charge = amount * 0.023;
    meter_charge = amount * 0.012;
    total_amount = amount + sur_charge + meter_charge;
    // printf("amount in %f\n", total_amount);
    return total_amount;
}
int billOutput(float total_amount)
{
    printf("Electricity Bill = %.3f TK\n", total_amount);
    printf("Thank You\nStay Tuned ");
    return 0;
}
// lip year programme
// int lipyear(){

//     int year;
//     printf("Enter a year\n");
//     scanf("%d",&year);

//     if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0)){

//         printf("%d is LEAP YEAR",year);

//     }
//     else{

//         printf("%d is COMMON YEAR",year);

//     }

//     return 0;
// }
