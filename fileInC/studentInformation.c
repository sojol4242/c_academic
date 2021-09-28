/*****/
/*
In this section, you will learn about file handling in C. You will learn to handle standard I/O in C using fprintf(), fscanf(), fread(), fwrite(), fseek() etc. with the help of examples.

Why file handling?
When a program is terminated, the entire data is lost. Storing in a file will preserve your data even if the program terminates.
If you have to enter a large number of data, it will take a lot of time to enter them all.
However, if you have a file containing all the data, you can easily access the contents of the file using a few commands in C.
You can easily move your data from one computer to another without any changes.

*/
/*
Write file: fputc(),fputw(),fputs(),fprintf(),fwrite();
Read file: fgetc(),fgetw(),fgets(),fscanf(),fread();

*/
/*****/
#include <stdio.h>
int main()
{

// declare a file :
//    FILE *file;
//    char name[50];
//    int age,roll,num;
//    file=fopen("student.txt","w");
//
//
//    if(file==NULL)
//    {
//        printf("File does not exists");
//    }
//    else
//    {
//        printf("Enter number of student: ");
//        scanf("%d",&num);
//        for(int i=1; i<=num; i++)
//        {
//            printf("Enter your name: ");
//            scanf("%[^\r]s",name);
//            printf("\nEnter your roll: ");
//            scanf("%d",&roll);
//            printf("\nEnter your age: ");
//            scanf("%d",&age);
//            fprintf(file,"%d\t%s\t\t%d\t%d",name,roll,age);
//            printf("\n");
//        }
    char name[50];
    int marks,i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("student.txt","w"));
    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (i=0; i<n; ++i)
    {
        printf("For student%d\nEnter name: ",i+1);
        scanf("%[^\r]s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"%s\t\t%d \n",name,marks);
    }
    fclose(fptr);



return 0;
}


