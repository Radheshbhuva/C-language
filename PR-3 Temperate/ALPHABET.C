#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
	int i;
	char r = 'a';
	clrscr();

	do {
	    pf("%c ", r);
	    r = 4+r;
	} while (r <= 'z');

	getch();
}
