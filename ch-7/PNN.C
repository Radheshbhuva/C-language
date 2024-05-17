#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
	int R;
	clrscr();

		pf("Enter the value of INT : ");
		sf("%d", &R);

		if(R>0)
		{
		pf("This number is Positive");
		}
		else if (R==0)
		{
		pf("This number is Neutral");
		}
		else
		{
		pf("This number is Negative");
		}

	getch();
}