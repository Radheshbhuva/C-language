#include <stdio.h>
#define pf printf
#define sf scanf

int cube(int size)
{
    size = size*size*size;
    return size;
}
void main()
{
    int r;
    pf("Enter Array  Size: ");
    sf("%d",&r);

    int array[r][r], *ptr[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            pf("Enter a[%d][%d]: ",i, j);
            sf("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            array[i][j]=cube(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }
    pf("\n\n");
    pf("Cube of Your Array is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            pf("%d:   ",*ptr[i][j]);
        }
    }
}