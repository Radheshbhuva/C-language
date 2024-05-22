#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int num1, num2, num3, max;
	clrscr();

	pf("Enter the value of all three numbers: ");
	sf("%d %d %d", &num1, &num2, &num3);

	max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

	pf("The maximum number from all three numbers is : %d\n", max);

	getch();

}