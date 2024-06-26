#include <stdio.h>
#define pf printf
#define sf scanf
int cube(int num)
{
    return num * num * num;
}

void main()
{
    int num, R;

    pf("Enter a positive integer: ");
    sf("%d", &num);

    R = cube(num);
    pf("Cube of %d is %d\n", num, R);

    
}