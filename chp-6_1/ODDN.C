#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int n;

	clrscr();
	pf("Enter any N number : ");
	sf("%d",&n);

	if (n % 2 == 0)
	{
	n--;
	}
	while (0 < n)
	{

	pf("%d\n",n);
	n -=2;
	}
	getch();

}