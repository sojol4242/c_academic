#include <stdio.h>
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
int main()
{

// declare a file :
    FILE *file;
    char name[50];
    int count=0;
//    int age,roll;

//create a new file we use fopen() function. this function take two parameter fopen("file_name","file mode(what  we want to doread/write) ")
    /*
    mode:
    1. w= create and write a new file;
    2. r=  read a file;
    3. a= add new thing to existing file;
    */
    file=fopen("text.txt","w");


    if(file==NULL)
    {
        printf("File is null");
    }
    else
    {
        printf("File is created successfully\n");
//        printf("Enter your Roll : \n");
//        scanf("%d",&roll);
        printf("Enter your name : \n");
        scanf("%[^\r]s",name);
//        gets(firstName);
//        printf("Enter your Age : \n");
//        scanf("%d",&age);
        // fprintf(filepointer,format_specifers,variabels)


        fprintf(file,"Name= %s",name);

        // code for finding word in a string
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (name[i] == ' ' && name[i+1] != ' ')
                count++;
            if (name[i]=='i')
                 count++;
        }
        printf("Number of words in given string are: %d\n", count + 1);
        printf("Number of i in given string are: %d\n", count);







        /*gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("Inner file : ",name);
        */
// for closing a file we use fclose();
        fclose(file);
    }

    return 0;
}

