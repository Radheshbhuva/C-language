#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int i, startyear, endyear, l = 0;
    pf("Enter starting year: ");
    sf("%d", &startyear);
    pf("Enter ending year: ");
    sf("%d", &endyear);

    int leap[endyear - startyear];

    pf("Leap year between %d and %d are : \n", startyear, endyear);
    for (int i = startyear; i < endyear; i++)
    {
        {
            if (startyear % 4 == 0)
            {
                leap[l] = i;
                l++;
            }
        }
    }
    pf("Leap years are:");
    for (int i = 0; i < l; i++)
    {
        pf("%d\n", leap[i]);
    }
}