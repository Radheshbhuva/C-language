#include <stdio.h>
#include <conio.h>
#define pf printf
#define sf scanf
#define cl clrscr
main()
{
	int languagechoice, servicechoice;
	cl();
	pf("Press 1 for English!\n");
	pf("Press 2 for Hindi!\n");
	pf("Press 3 for Gujarati!\n");
	pf("\n");
	pf("Enter Digit for Choosing the language");
	sf("%d", &languagechoice);
	pf("\n\n\n");
		switch(languagechoice)
		{
	case 1:
		pf("Press 1 for Internet service\n");
		pf("Press 2 for Top-up service\n");
		pf("Press 3 for Special service\n");
		pf("Enter the service whichever you want: \n");
		sf("%d", &servicechoice);

			switch(servicechoice)
			{
		case 1:
			pf("safaltapurvak\n");
			break;

		case 2:
			pf("Press 2 for Top-up Service\n");
			break;
		case 3:
			pf("Press 3 for special service\n");
			break;
	       default :
	       pf("Invalid Input");
	       }
	       break;
	case 2:
		pf("1 ko dabye Internet servicve ke liye\n");
		pf("2 ko dabye Top-up service ke liye\n");
		pf("3 ko dabye Special service ke liye\n");
		break;

	case 3:
		pf("1 ne dabavo Internet ni service medava mate\n");
		pf("2 ne dabavo Top-up ni service medava mate\n");
		pf("3 ne dabavo special service medavo mate\n");
		break;

	default:
	       pf("Invalid Input !!!");
	       }
	       getch();
}
