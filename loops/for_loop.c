/*
C for Loop
In this tutorial, you will learn to create for loop in C programming with the help of examples.

In programming, a loop is used to repeat a block of code until the specified condition is met.

C programming has three types of loops:

for loop
while loop
do...while loop
We will learn about for loop in this tutorial. In the next tutorial, we will learn about while and do...while loop.

for Loop
The syntax of the for loop is:

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
How for loop works?
The initialization statement is executed only once.
Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
However, if the test expression is evaluated to true, statements inside the body of the for loop are executed, and the update expression is updated.
Again the test expression is evaluated.
*/
#include <stdio.h>
 
int main(){
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++){
    for(j=1;j<=i;j++)	
       printf("*");
    printf("\n");
   }
 
}


// Write a program in C to display the n terms of harmonic series and their sum. Go to the editor
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms


// int main()
//    int i,n;
//    float sum=0.0;
//    printf("Input the number of terms : ");
//    scanf("%d",&n);
//    printf("\n\n");
//    for(i=1;i<=n;i++)
//    {
//        if(i<n)
//        {
//      printf("1/%d + ",i);
//      sum+=1/(float)i;
//        }
//      if(i==n)
//      {
//      printf("1/%d ",i);
//      sum+=1/(float)i;
//      }
//      }
//         printf("\nSum of Series upto %d terms : %f \n",n,s);
// return 0;
// }