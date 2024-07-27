#include <stdio.h>
#define pf printf
#define sf scanf

struct students
{
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

float calculate_percentage(float chem_marks, float maths_marks, float phy_marks)
{
    return ((chem_marks + maths_marks + phy_marks) / 300) * 100;
}

void main()
{ 
    int size; 
    pf("Enter the Number of Students: ");
    sf("%d", &size);
    struct students s1[size];

    for (int i = 0; i < size; i++)
    {
        system("cls");
        pf("Enter Roll No. of Student: ");
        sf("%d", &s1[size].roll_no);
        fflush(stdin);
        pf("Enter Student's Name: ");
        sf("%s", &s1[size].name);
        pf("Enter Student's Chemistry marks : ");
        sf("%d", &s1[size].chem_marks);
        pf("Enter Student's Maths marks: ");
        sf("%s", &s1[size].maths_marks);
        pf("Enter Student's Physics marks : ");
        sf("%s", &s1[size].phy_marks);
    

        for (int i = 0; i < size; i++)
        {
            float percentage = calculate_percentage(s1[size].chem_marks, s1[size].maths_marks, s1[size].phy_marks);

            pf("\nRoll No: %d\n", s1[size].roll_no);
            pf("Name: %s\n", s1[size].name);
            pf("Chemistry: %.2f/100\n", s1[size].chem_marks);
            pf("Mathematics: %.2f/100\n", s1[size].maths_marks);
            pf("Physics: %.2f/100\n", s1[size].phy_marks);
            pf("Percentage: %.2f%%\n", percentage);
        }
    }
}
