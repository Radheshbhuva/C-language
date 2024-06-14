#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int j, size1;
    pf("Enter Array size: ");
    sf("%d", &size1);

    int a[size1];

    pf("\n\n Enter Array Element... \n\n");
    for (int i = 0; i < size1; i++)
    {
        pf("Enter a[%d]: ", i);
        sf("%d", &a[i]);
    }

    pf("Square of Array are: ");

    
    for (int i = 0; i < size1; i++)
    {
        pf("%d,", a[i]*a[i]);
    }
}