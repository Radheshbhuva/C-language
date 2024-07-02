#include <stdio.h>
#define pf printf
#define sf scanf

void main()
{
    int len;
    char str[200];
    

    pf("Enter Your String: ");
    sf("%[^\n]", &str);

    for (len = 0; str[len] !='\0'; len++);
    
    int *ptr;
    ptr = &len;

    pf("Length of Your String: %d", *ptr);
    
}