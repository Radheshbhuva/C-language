#include <stdio.h>
#define pf printf
#define sf scanf

int square(int size)
{
    size = size * size;
    return size;
}
void main()
{
    int r;
    pf("Enter Array  Size: ");
    sf("%d", &r);

    int array[r], *ptr[r];
    for (int i = 0; i < r; i++)
    {

        pf("Enter a[%d]: ", i);
        sf("%d", &array[i]);
    }
    for (int i = 0; i < r; i++)
    {

        array[i] = square(array[i]);
        ptr[i] = &array[i];
    }

    pf("\n\n");
    pf("Square of Your Array is: \n");

    for (int i = 0; i < r; i++)
    {
        pf("%d \n", *ptr[i]);
    }
}