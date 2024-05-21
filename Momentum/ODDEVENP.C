#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int n;
	clrscr();
	pf("Enter the digit : ");
	sf("%d",&n);

		(n%2==0)
			? pf("The given Number is Even : %d",n)
			: pf("The given Number is Odd : %d",n);
	getch();
}
