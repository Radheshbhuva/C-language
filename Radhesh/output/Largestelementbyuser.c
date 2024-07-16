#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
     
    int i, r, max;
    int arr[100]; 

    pf("Enter the Number of Elements which You are going to Put: ");
    sf("%d", &r);

    pf("Enter %d elements:\n", r);
    for (i = 0; i < r; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 
    for (i = 1; i < r; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    pf("The largest element is: %d\n", max);
}