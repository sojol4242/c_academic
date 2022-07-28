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
#include <stdlib.h>
#include <string.h>
int main()
{

    int marks, sId, i, n;
    char ch[100];
    printf("Enter number of students: ");
    scanf("%d", &n);


    // declare a file
    FILE *fptr;

    // write data to file
    fptr = (fopen("student.txt", "w"));

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    else
    {

        fprintf(fptr, "sID\t\t\tMarks\n", sId, marks);

        for (i = 0; i < n;  i++)
        {
            printf("For student %d \n", i + 1);
            printf("Enter Id\n");
            scanf("%d", &sId);

            printf("Enter marks: ");
            scanf("%d", &marks);

            fprintf(fptr, "19EEE0%d\t\t%d\n", sId, marks);
        }

        fclose(fptr);
    }

    // read data from file
    fptr = (fopen("student.txt", "r"));
    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    else
    {
        printf("File Opened successfully \n");
      
        while (!feof(fptr))
        {
            fgets(ch, 100, fptr);
            printf("%s\n", ch);
        }
        fclose(fptr);
    }
    return 0;
}
