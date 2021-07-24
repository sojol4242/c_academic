#include <stdio.h>
/*
If Statement
The if statement is used to check some given condition and perform some operations depending upon the correctness of that condition. It is mostly used in the scenario where we need to perform the different operations for the different conditions. The syntax of the if statement is given below.

code structure:
if(expression){  
//code to be executed  


} */
/*
If-else Statement

The if-else statement is used to perform two operations for a single condition. The if-else statement is an extension to the if statement using which, we can perform two different operations, i.e., one is for the correctness of that condition, and the other is for the incorrectness of the condition. Here, we must notice that if and else block cannot be executed simiulteneously. Using if-else statement is always preferable since it always invokes an otherwise case with every if condition. The syntax of the if-else statement is given below.

code structure:

if(expression){  
//code to be executed if condition is true  
}else{  
//code to be executed if condition is false  
}  
} */

/*
If else-if ladder Statement
The if-else-if ladder statement is an extension to the if-else statement. It is used in the scenario where there are multiple cases to be performed for different conditions. In if-else-if ladder statement, if a condition is true then the statements defined in the if block will be executed, otherwise if some other condition is true then the statements defined in the else-if block will be executed, at the last if none of the condition is true then the statements defined in the else block will be executed. There are multiple else-if blocks possible. It is similar to the switch case statement where the default is executed instead of else block if none of the cases is matched.
 


if(condition1){  
//code to be executed if condition1 is true  
}else if(condition2){  
//code to be executed if condition2 is true  
}  

else if(condition3){  
//code to be executed if condition3 is true  
}  

... 


else{  
//code to be executed if all the conditions are false  
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
//     return 0;
// }


int main(){
      int a,b,c,d;
    printf("Enter 4 number \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
 

  if(a!=b&&b!=c&&c!=d){
        if(a>b && a>c && a>d){
        printf("%d is largest",a);

    }
    else if(b>a && b>c && b>d){
        printf("%d is largest",b);

    }
    else if(c>a && c>d && c>b){
        printf("%d is largest",c);

    }
    else if(d>a && d>b && d>c){
        printf("%d is largest",d);

    }
  }
  else{
      printf("some values are equal");
  }
}

// int main(){
//     int unit=20;
//     float amount, total_amount, sur_charge;
//     // printf("Enter total units consumed: ");
//     // scanf("%d", &unit);

 
//     if(unit >= 0 && unit <=200){
//         amount = unit * 5.72;
//         // printf("%.2f\n", amount);
//     }
//     else if(unit >= 201 && unit <=300){
//         amount = 1144+(unit-200)* 6.34;
//         // printf("%.2f\n", amount);

//     }
    
//     else{
//         amount = 748+(unit-300)*11.46;
//     //    printf("%.2f\n", amount);

//     }

    
//     sur_charge = amount * 0.20;
//     total_amount  = amount + sur_charge;
//         // printf("%.2f\n",     total_amount);


//     printf("Electricity Bill = %.2f TK", total_amount);

//     return 0;
// }

// int main()
// {
//     int year=2005;
 
//     if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
//     {
//         printf("LEAP YEAR");
//     }
//     else
//     {
//         printf("COMMON YEAR");
//     }

//     return 0;
// }
