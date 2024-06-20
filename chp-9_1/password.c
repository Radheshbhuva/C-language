#include <stdio.h>
#define sf scanf
#define pf printf

main()
{
    int i, len = 0, upr = 0, digit = 0, symbol = 0, lwr = 0;
    char p[20];

    pf("Enter your Password: ");
    sf("%s", &p);

    for (i = 0; p[i] != '\0'; i++)
        len++;
    for (i = 0; i < len; i++)
    {
        if (p[i] >= 65 && p[i] <= 90)
            upr++;
        else if (p[i] >= 97 && p[i] <= 122)
            lwr++;
        else if (p[i] >= 48 && p[i] <= 57)
            digit++;
        else
            symbol++;
    }
    if (len >= 6 && upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
    {
        pf("Password is Strong");
    }
    else
    {
        pf("Password is not Strong");
    }
}