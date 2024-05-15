#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	float basesalary, HRA, DA, TA, Grosssalary;
	clrscr();

	//Now take the input from the user

	pf("Enter the Base salary : ");
	sf("%f", &basesalary);
pf("\n");


	HRA = (basesalary*10)/100;
	DA = (basesalary*5)/100;
	TA = (basesalary*8)/100;

pf("\n");
       pf("Base Salary : %.2f\n",basesalary);
       pf("HRA : %.2f\n",HRA);
       pf("DA : %.2f\n",DA);
       pf("TA : %.2f\n",TA);
       Grosssalary = basesalary + HRA + DA + TA;
       getch();
}

