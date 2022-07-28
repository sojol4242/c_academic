#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    FILE *fptr;
    char ch[100];

    if ((fptr = fopen("program.txt", "w")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    else
    {

        printf("Enter id: ");
        scanf("%d", &id);
        fprintf(fptr, "Id in file %d\n", id);
        fclose(fptr);
    }

    if ((fptr = fopen("program.txt", "r")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
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