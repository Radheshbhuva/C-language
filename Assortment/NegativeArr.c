#include<stdio.h>
#define pf printf
 #define sf scanf

main()
{
  int size,i;
  
  pf("Enter a array size :");
  sf("%d",&size);
  
  int a[size];
  for( i = 0; i < size; i++)
  {
    pf("a[%d] :",i);
    sf("%d",&a[i]);
  
  }
  pf("Negative Elements for an Array:");
  
  for( i = 0; i < size; i++)
  {
      if(a[i]<0)
      {
         
         pf("%d ",a[i]);
         
      }
  
  }

}