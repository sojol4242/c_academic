#include <stdio.h>
struct Time_Format_STRUCT
{
    int hr, min, sec;
};
struct Student
{
    int s_id, session;
    char s_name[100];
};
int main()
{
    // declare structure variables
    struct Time_Format_STRUCT time;
    printf("Enter Hour : ");
    scanf("%d", &time.hr);
    printf("Enter Min : ");
    scanf("%d", &time.min);
    printf("Enter Second : ");
    scanf("%d", &time.sec);
    printf("Time is ");
    printf("%d:%d:%d\n", time.hr, time.min, time.sec);
    struct Student student;
    printf("Enter Id : ");
    scanf("%d", &student.s_id);
    printf("Enter Name : ");
    scanf("%[^\n]s", student.s_name);

    // gets(student.s_name);
    printf("Enter Session : ");
    scanf("%d", &student.session);
    printf("Student information \n");
    printf("Name: %s\nId: %d\nSession: %d", student.s_name, student.s_id, student.session);

    return 0;
}