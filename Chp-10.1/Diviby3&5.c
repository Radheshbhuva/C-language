#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int n;

    pf("Enter any number: ");
    sf("%d", &n);

    if (n%3 == 0 && n%5 == 0)
    {
        pf("The given number is divisible by both 3 & 5.\n");
    }
    else
    {
        pf("The given number is not divisible by both 3 & 5.\n");
    }
}