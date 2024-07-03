#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int r;
    pf("Enter Array  Size: ");
    sf("%d", &r);

    int array[r], *ptr[r];
    for (int i = 0; i < r; i++)
    {
        pf("Enter your Array Elements [%d]: ", i);
        sf("%d", &array[i]);
    }

    for (int i = 0; i < r; i++)
    {
        ptr[i] = &array[i];
    }

    for (int i = r-1; i >= 0; i--)
    {
        pf("%d\t", *ptr[i]);
    }
}