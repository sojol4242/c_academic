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
int main()
{

float a,b;
char op;
printf("Enter operator you want like (+, -, *, /):\n");
scanf("%c",&op);
printf("Enter a \n");
scanf("%f",&a);
printf("Enter b \n");
scanf("%f",&b);
 
    switch(op){
    case '+': 
         printf("Result is \n");
        printf("%.2f+%.2f=%.2f",a,b,a+b);
        break;
    case '-': 
         printf("Result is \n");
        printf("%.2f-%.2f=%.2f",a,b,a-b);
        break;
    case '*': 
         printf("Result is \n");
        printf("%.2f*%.2f=%.2f",a,b,a*b);
        break;
    case '/': 
        printf("Result is \n");
        printf("%f/%f=%.2f",a,b,a/b);
        break;
    
    default : printf("Invalid Input");
        
}
 

    return 0;
}