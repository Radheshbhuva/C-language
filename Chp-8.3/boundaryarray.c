#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col, sum = 0;
    int i, j;

    pf("Enter the No. of Rows: ");
    sf("%d", &row);

    pf("Enter the No. of Cols: ");
    sf("%d", &col);

    int a[row][col];

    pf("Enter Matrix Elements: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d]: ", i, j);
            sf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (i==0 || j==0 || i==4 || j==4)
            {
                pf("%d ",a[i][j]);
            }
            else
            {
                pf("  ");
            }
        }
        pf("\n");
    }
}