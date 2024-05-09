#include<stdio.h>
#include<conio.h>
#define Mn main
#define Cl clrscr
#define Gh getch
#define Pf printf

Mn()
{
	int a;
	float Pi;
	char ch;
  Cl();
	Pf("Enter any digit : ");
	scanf("%d",&a);

	Pf("Enter value of Pi : ");
	scanf("%f",&Pi);
	fflush(stdin);

	Pf("Enter any Character : ");
	scanf("%c",&ch);
	Pf("a : %d\n",a);
	Pf("Pi: %f\n",Pi);
	Pf("ch: %c\n",ch);

	float ans = a*Pi;
	Pf("%f ",ans);

	Gh();

}


