#include <stdio.h>
#define pf printf
#define sf scanf

void swap(int *a, int *b) 
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main() 
{
    int x;
    int y;

    pf("Enter Your 1st Choice: ");
    sf("%d",&x);

    pf("Enter Your 2nd Choice: ");
    sf("%d", &y);

    pf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    pf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}