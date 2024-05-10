#include<stdio.h>
#include<conio.h>
#define Mn main
#define Pf printf
#define G getch
#define Cr clrscr
#define Wt width
#define Lt length

Mn()
{
	const int Lt = 10;
	const int Wt = 20;
	const int Area = Lt * Wt;

	Pf("Area of the rectangle is: %d\n", calculateArea(Lt,Wt));

	G();
}