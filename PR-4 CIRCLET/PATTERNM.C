#include <stdio.h>
#include <conio.h>
#define pf printf
main()
{
	int i, j, n=5, m=11;
	clrscr();
	for (i=1; i<=n; i++)
	{
	 for (j=0; j<i; j++)
	 {
	  pf(" %d ", m);
	  m++;
	 }
	  pf("\n");
	}
	  getch();
}