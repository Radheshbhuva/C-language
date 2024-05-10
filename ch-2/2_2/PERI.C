#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
#define pi 3.14
#define cl clrscr
main()
{
	float radius, perimeter;
	float v = 2;

	cl();
	pf("Enter the value of Radius of circle : ");
	sf("%f",&radius);

	perimeter = v * pi * radius;

	pf("The perimeter of circle is : %.2f\n",perimeter);

	getch();

}