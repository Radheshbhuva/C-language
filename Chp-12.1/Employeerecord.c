#include <stdio.h>
#define pf printf
#define sf scanf

/*- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name */

struct Employee
{
    int id;
    char name[20];
    int age;
    char role[20];
    char city[20];
    int experience;
    char Companyname[20];
};

void main()
{
    int size; 
    pf("Enter the Number of Employee: ");
    sf("%d", &size);
    struct Employee s1[size];
    
    for (int i = 0; i < size; i++)
    {
        system("cls");
        pf("Enter the Records of Employee %d\n",size);
        pf("Enter Employee ID: ");
        sf("%d", &s1[i].id);
        fflush(stdin);
        pf("Enter Employee's Name: ");
        sf("%s", &s1[i].name);
        pf("Enter Employee's Age: ");
        sf("%d", &s1[i].age);
        pf("Enter Employee's role Name: ");
        sf("%s", &s1[i].role);
        pf("Enter Employee's City Name : ");
        sf("%s",&s1[i].city);
        pf("Enter Employee's Experience: ");
        sf("%d",&s1[i].experience);
        pf("Enter Employee's Company Name: ");
        sf("%s",&s1[i].Companyname);

        pf("\n\n");
    }

    system("cls");
    pf("Employees Record:\n");
    for (int i = 0; i < size; i++)
    {
        pf("Employee ID: %d\n", s1[i].id);
        pf("Employee Name: %s\n", s1[i].name);
        pf("Employee Age: %d\n", s1[i].age);
        pf("Employee Role: %s\n", s1[i].role);
        pf("Employee City Name: %s\n", s1[i].city);
        pf("Employee Experience: %d\n", s1[i].experience);
        pf("Employee Company Name: %s\n", s1[i].Companyname);

        pf("\n\n");
    }
}

