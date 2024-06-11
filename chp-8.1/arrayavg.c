#include <stdio.h>
#define pf printf 
#define sf scanf
main()
{
    int n, sum = 0;

    pf("Enter the size of Array: ");
    sf("%d", &n);

        int a[n];

        for (int i = 0; i<n; i++)
        {
            pf("Enter a[%d]: ",i);
            sf("%d", &a[i]);
        }

        for (int i = 0; i<n; i++)
        {
            sum += a[i];
        }              
            float avg = (float)sum /n;
            pf("Average is: %.2f\n", avg);
}
