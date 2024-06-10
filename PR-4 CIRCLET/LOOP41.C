#include <stdio.h>
#include <conio.h>
#define pf printf
main()
{
	int i, j, n=5, m=41;
	clrscr();

	for (i=0; i<n; i++)
	{
	 for (j=0; j<=i; j++)
	 {
	  pf(" %d ",m+j);
	 }
	  pf("\n");
	}
	getch();
}


