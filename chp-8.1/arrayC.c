#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int size, r;
    pf("Enter Array size: ");
    sf("%d", &size);

        int a[size], b[size], sum[size];

        pf("\n\n Enter First Array Element... \n\n");
        for (int i=0; i<size; i++)
        {
            pf("Enter a[%d]: ",r);
            sf("%d", &a[i]);
        }
            pf("\n\n Enter Second Array Elements... \n\n");
        for (int i=0; i<size; i++)
        {
            pf("Enter b[%d]: ",r);
            sf("%d", &b[i]);
        }
            for (int i = 0; i<size; i++)
            sum[i] = a[i] + b[i];

                pf("Your C Array is:");
                for ( int i = 0; i < size; i++)    
                {
                    pf("%d\t",sum[i]);
                }
            
}