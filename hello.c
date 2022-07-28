// Assignment 1 : A program using string, 2D array and function;

/*
definition section
*/
// link section
#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX_ARR_SIZE 30
#define MAX_NAME_SIZE 100

// global declaration section

void takeInput(char name[][MAX_NAME_SIZE], int n);
void showOutput(char name[][MAX_NAME_SIZE], int n);

// main section 
int main()
{

    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    char name[MAX_ARR_SIZE][MAX_NAME_SIZE];
    printf("Enter %d names:\n", n);
    takeInput(name, n);
    printf("\nEntered names are:\n");
    showOutput(name, n);
    return 0;
}

// user define function or subsection

// take input from user
void takeInput(char name[][MAX_NAME_SIZE], int n)
{
    for (int i = 0; i < n; i++)
        scanf("%s[^\n]", name[i]);
}
// displaying names
void showOutput(char name[][MAX_NAME_SIZE], int n)
{

    for (int i = 0; i < n; i++)
        puts(name[i]);
}

