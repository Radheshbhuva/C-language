#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf

main()
{
	int num, ans;
	clrscr();

	pf("Enter the Value of Num : ");
	sf("%d" ,&num);

	pf("%d * 1 = %d\n",num, num*1, ans);
	pf("%d * 2 = %d\n",num, num*2, ans);
	pf("%d * 3 = %d\n",num, num*3, ans);
	pf("%d * 4 = %d\n",num, num*4, ans);
	pf("%d * 5 = %d\n",num, num*5, ans);
	pf("%d * 6 = %d\n",num, num*6, ans);
	pf("%d * 7 = %d\n",num, num*7, ans);
	pf("%d * 8 = %d\n",num, num*8, ans);
	pf("%d * 9 = %d\n",num, num*9, ans);
	pf("%d *10 = %d\n",num, num*10, ans);

	getch();
}