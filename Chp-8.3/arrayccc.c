#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col;
    
    pf("Enter the No. of Row: ");
    sf("%d", &row);

    pf("Enter the No. of Col: ");
    sf("%d", &col);

    int a[row][col], b[row][col], sum[row][col];

    pf("\n\n Enter First Array Element... \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d]: ", i,j);
            sf("%d", &a[i][j]);
        }
    }
    pf("\n\n Enter Second Array Elements... \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter b[%d][%d]: ", i,j);
            sf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    pf("\n\n");
    pf("Your C Array is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf(" %d ", sum[i][j]);
        }
            pf("\n");
    }
}