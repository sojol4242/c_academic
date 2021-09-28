#include <stdio.h>;
#include <math.h>;
// declaration of function printLn
void printLn(char ch, int lenght);
// declaration of function distance
void distance(int a, int b, int c,int d);


// definition of function distance
void distance(int a, int b,int c,int d){
int lenght=(a-c)*(a-c)+(b-d)*(b-d);
 double result= sqrt(lenght);
  printf("Distance= %.2lf\n",result);

}

// definition of function printLn
void printLn(char ch, int lenght){
    for(int i=0;i<lenght;i++){
        printf("%c",ch);
    }
        printf("\n");
}

// driver function
int main(){
    int x1,x2, y1, y2;
    // take input from user;
    printf("Enter x1= ");
    scanf("%d", &x1);
    printf("Enter x2= ");
    scanf("%d", &x2);
    printf("Enter y1= ");
    scanf("%d", &y1);
    printf("Enter y2= ");
    scanf("%d", &y2);

    // call the printLn function;
    printLn('*',30);
    printf("Distance between two point \n");
    // call the printLn function;
    printLn('-',30);
    // call the distance function;
    distance(x1,x2,y1,y2);
    // call the printLn function;
    printLn('*',30);
    return 0;
}
