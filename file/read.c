
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
#include <string.h>
int main()
{

// declare a file :
    FILE *file;

    char ch[400];
//create a new file we use fopen() function. this function take two parameter fopen("file_name","file mode(what  we want to doread/write) ")
    /*
    mode:
    1. w= create and write a new file;
    2. r=  read a file;
    3. a= add new thing to existing file;
    */
    file=fopen("text.txt","r");


    if(file==NULL)
    {
        printf("File is null");
    }
    else
    {
        printf("File is opened successfully\n");
        /* while(!feof(file)){
            ch=fgetc(file);
            printf("%c",ch);
         }
        */


        // fgets(variables,size,filepointer);
        /*while(!feof(file)){
             fgets(ch,39,file);
             printf("%s \n",ch);
        } */


        //fscanf(filepointer,formatspecifiers,variablename)
        while(!feof(file))
        {
            fscanf(file,"%s",ch);
            printf("%s",ch);
        }
        // for closing a file we use fclose();
        fclose(file);
    }

    return 0;
}

