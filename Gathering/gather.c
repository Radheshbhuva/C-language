#include <stdio.h>
#define pf printf
#define sf scanf

void add(int a, int b)
{
    pf("Addition of Your Choices %d & %d is %d", a, b, a + b);
}

void sub(int a, int b)
{
    pf("Subtractiuon of Your Choices %d & %d is %d", a, b, a - b);
}

void mul(int a, int b)
{
    pf("Multiplication of Your Choices %d & %d is %d", a, b, a * b);
}

void div(int a, int b)
{
    pf("Division of Your Choices %d & %d is %d", a, b, a / b);
}

void modu(int a, int b)
{
    pf("Modulus of Your Choices %d & %d is %d", a, b, a % b);
}

void main()
{
    int a, b, Q;
    do
    {

        pf("Press 1 for /+/ of Your Choice: ");

        pf("Press 2 for /-/ of Your Choice: ");

        pf("Press 3 for /*/ of Your Choice: ");

        pf("Press 4 for |/| of Your Choice: ");

        pf("Press 5 for /%%/ of Your Choice: ");

        pf("Press 0 for Exit: ");
        sf("%d", Q);

        Switch(Q)
        {
        case 1:
            pf("Enter Your First Choice: ");
            sf("%d", &a);

            pf("Enter Your Second Choice:");
            sf("%d", &b);
            add(a, b);
            break;
        case 2:
            pf("Enter Your First Choice: ");
            sf("%d", &a);

            pf("Enter Your Second Choice:");
            sf("%d", &b);
            sub(a, b);
            break;
        case 3:
            pf("Enter Your First Choice: ");
            sf("%d", &a);

            pf("Enter Your Second Choice:");
            sf("%d", &b);
            mul(a, b);
            break;
        case 4:
            pf("Enter Your First Choice: ");
            sf("%d", &a);

            pf("Enter Your Second Choice:");
            sf("%d", &b);
            div(a, b);
            break;
        case 5:
            pf("Enter Your First Choice: ");
            sf("%d", &a);

            pf("Enter Your Second Choice:");
            sf("%d", &b);
            modu(a, b);
            break;
        }
    }
}
