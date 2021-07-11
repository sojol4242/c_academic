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



int main()
{
    int number = -16;
    
    if (number == 0)
    {
        printf("%d is non-negative number", number);
    }
    else if (number % 2 == 0)
    {
        printf("%d is even number", number);
    }
    else
    {
        printf("%d is odd number", number);
    }
    return 0;
}