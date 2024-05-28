#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
	int number, count = 0;
	clrscr();

	pf("Enter any digit : ");
	sf("%d", &number);


	while (number != 0){
	number=number /10;
	count++;
	}

	pf("Total number of digits : %d\n\n", count);

	getch();

}
