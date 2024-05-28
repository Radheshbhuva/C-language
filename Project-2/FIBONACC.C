#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
main()
{
	int i=1, n, first = 0, second = 1, next;
	clrscr();

	//Taking Input from user
	pf("Enter the Value of N: ");
	sf("%d", &n);
	pf("\n");
	pf("The fibonacci series is : ", n);

	 pf(" %d ", first);

	 pf(" %d ", second);

	//Now using for_loop for getting Fibonacci series

	for (; i<=n; i++)

	{
		next = first + second;
		pf(" %d ", next);
		first = second;
		second = next;
	}
	 pf("\n\n");

	 getch();
}
