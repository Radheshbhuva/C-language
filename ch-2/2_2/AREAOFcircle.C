#include <stdio.h>
#include <conio.h>
#define Pf printf
#define cl clrscr
#define PI 3.14

main()
{
float radius,area;

printf("Enter the radius value of circle: ");
scanf("%f", &radius);

// area of circle is Pi*r(2)

area = PI*radius*radius;

Pf("The area of the circle %.2f is: %.2f\n",radius,area);

	getch();
}
