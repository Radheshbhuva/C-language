#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int startyear, endyear;
	clrscr();

	pf("Enter the start year :");
	sf("%d", &startyear);
	pf("\n");
	pf("Enter the end year :");
	sf("%d", &endyear);

	pf("Leap year between %d and %d are : \n", startyear, endyear);
	while (startyear <= endyear)
	{
		if (startyear%4==0){

			pf("%d\n", startyear);
		}
		startyear++;
	}
	getch();
}

