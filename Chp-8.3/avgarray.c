#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col, sum = 0;

    pf("Enter No. of Rows: ");
    sf("%d", &row);

    pf("\n");

    pf("Enter No. of columns: ");
    sf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter the value of a[%d][%d]: ", i, j);
            sf("%d", &a[i][j]);
        }
        pf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum+a[i][j];
        }
        pf("\n\n");
    }
            pf("Average of Array is: %.2f\n", (float)sum/(row*col));
}
