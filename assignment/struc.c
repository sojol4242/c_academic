#include <stdio.h>
struct time_format_struct
{
    int hr, min, sec;
};
struct Student
{
    int st_id;
    char st_name[100], session[10];
};
int main()
{
    // declare structure variables
    struct time_format_struct time;
    int hr=time.hr,min=time.min,sec=time.sec;
    printf("Enter Hour : ");
    scanf("%d", &hr);
    printf("Enter Min : ");
    scanf("%d", &min);
    printf("Enter Second : ");
    scanf("%d", &sec);
    printf("Time is ");
    if (hr <= 24 && min <= 60 && sec <= 60)
    {
        printf("%d:%d:%d\n", hr, min, sec);
    }
    else
    {
        printf("Input time is invalid\n");
    }
    struct Student student;
    printf("Enter Id : ");
    scanf("%d", &student.st_id);
    printf("Enter Name : ");
    scanf("%s", student.st_name);

    // gets(student.s_name);
    printf("Enter Session : ");
    scanf("%s", student.session);
    printf("Student information \n");
    printf("Name: %s\nId: %d\nSession: %s", student.st_name, student.st_id, student.session);

    return 0;
}