#include <stdio.h>
#define pf printf
#define sf scanf

int sum(int a1, int a2);
int sub(int a1, int a2);
int multi(int a1, int a2);
int divi(int a1, int a2);
int modul(int a1, int a2);

main()
{
    int calculator, a1, a2;

    do
    {
        pf("Press 1 for + \n");
        pf("Press 2 for - \n");
        pf("Press 3 for * \n");
        pf("Press 4 for / \n");
        pf("Press 5 for %%\n");
        pf("Press 0 for Exit\n\n");

        pf("Enter your Choice: ");
        sf("%d", &calculator);
        if (calculator != 0)
        {
            pf("\n");

            pf("Enter the First number: ");
            sf("%d", &a1);

            pf("\n");

            pf("Enter the Second number: ");
            sf("%d", &a2);

            pf("\n");
        }
        switch (calculator)
        {
        case 1:

            sum(a1, a2);

            break;

        case 2:

            sub(a1, a2);

            break;

        case 3:

            mult(a1, a2);

            break;

        case 4:

            divi(a1, a2);

            break;

        case 5:

            modulus(a1, a2);

            break;

        case 0:

            pf("You are exited from the Calculator \n");
        }
    } while (calculator != 0);
}
int sum(int a1, int a2)
{
    pf("Addition of %d and %d is: %d\n\n", a1, a2, a1 + a2);
}
int sub(int a1, int a2)
{
    pf("Substraction of %d and %d is: %d\n\n", a1, a2, a1 - a2);
}
int mult(int a1, int a2)
{
    pf("Multiplication of %d and %d is: %d\n\n", a1, a2, a1 * a2);
}
int divi(int a1, int a2)
{
    if (a2 != 0)
    {
        pf("Division of %d and %d is: %d\n\n", a1, a2, a1 / a2);
    }
    else
    {
        pf("Can't divide by zero\n\n");
    }
}
int modulus(int a1, int a2)
{
    pf("modulus of %d and %d is: %d\n\n", a1, a2, a1 % a2);
}