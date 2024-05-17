#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int num1, num2;
	clrscr();

	pf("Enter the value of the first number : ");
	sf("%d", &num1);

pf("\n");
	pf("Enter the value of the second number : ");
	sf("%d", &num2);

		if(num1<num2)
		{
		  pf("The Minimum value is : %d", num1);
		}
		else
		{
		  pf("The Minimum value is : %d", num2);
		}

	getch();
}

