#include <stdio.h>
#define pf printf
#define sf scanf


/*stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school */

struct Student
{
    int id;
    char name[20];
    int age;
    char course[20];
    char city[20];
    int standard;
    char school[20];
};

void main()
{
    int size; 
    pf("Enter the Number of Students: ");
    sf("%d", &size);
    struct Student s1[size];
    
    for (int i = 0; i < size; i++)
    {
        system("cls");
        pf("Enter Details of Student %d\n",size);
        pf("Enter Student ID: ");
        sf("%d", &s1[i].id);
        fflush(stdin);
        pf("Enter Student's Name: ");
        sf("%s", &s1[i].name);
        pf("Enter Student's Age: ");
        sf("%d", &s1[i].age);
        pf("Enter Student's Course Name: ");
        sf("%s", &s1[i].course);
        pf("Enter Student's City Name : ");
        sf("%s",&s1[i].city);
        pf("Enter Student's Standard: ");
        sf("%d",&s1[i].standard);
        pf("Enter Student's School Name: ");
        sf("%s",&s1[i].school);

        pf("\n\n");
    }

    system("cls");
    pf("Student Details:\n");
    for (int i = 0; i < size; i++)
    {
        pf("Student ID: %d\n", s1[i].id);
        pf("Student Name: %s\n", s1[i].name);
        pf("Student Age: %d\n", s1[i].age);
        pf("Student Course Name: %s\n", s1[i].course);
        pf("Student City Name: %s\n", s1[i].city);
        pf("Student Standard: %d\n", s1[i].standard);
        pf("Student School Name: %s\n", s1[i].school);

        pf("\n\n");
    }
}