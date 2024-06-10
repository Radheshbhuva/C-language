#include <stdio.h>
#include <conio.h>
#define pf printf
main()
{
	int i, j;
	clrscr();

	for (i=1; i<=6; i++)
	{

		if (i==1 ||i==3)
		{
			pf("* * * * *\n");
		}
		else
		{
			pf("*       *\n");
		}
	}
	getch();
}