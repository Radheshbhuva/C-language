#include<stdio.h>
#define pf printf
#define sf scanf
main()
{
   int row,col,i,j;
   
   pf("Enter a row size :");
   sf("%d",&row);
   pf("Enter a col size :");
   sf("%d",&col);
   
   pf("\n");
   
   int a[row][col];
   
   for(i = 0; i < row; i++)
   {
   for(j = 0; j < col; j++)
   {
     
     pf("a[%d][%d] : ",i,j);
     sf("%d",&a[i][j]);
     
   }
   
   }
   
   pf("Transpose matrix ... :- \n");
    for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < col; j++)
        {
            pf("%d  ",a[j][i]);
        }
        pf("\n");
    }


}