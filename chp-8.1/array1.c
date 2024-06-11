#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int r;
    pf("Enter Array size: ");
    sf("%d", &r);

        int a[r];

        pf("\n\n Array input \n\n");
        for (int i=0; i<r; i++)
        {
            pf("Enter a[%d]: ",i);
            sf("%d", &a[i]);
        }
            pf("\n\n Array output \n\n");
            for (int i = 0; i<r; i++)
            {
                pf("%d\t",a[i]);
            }

                pf("\nLength of Array is : %d", r);
}