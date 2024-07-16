#include <stdio.h>
#define pf printf
#define sf scanf

void reverse(char *str)
{
    int length = 0;
    char *start = str;
    char letter;

    while(*(str++) != '\0') 
    {
        length++;
    }

    str = start;
    for(int i=0; i<length/2; i++) 
    {
       letter = *(str+i);
        *(str+i) = *(str+length-i-1);
        *(str+length-i-1) = letter;
    }
}

void main() 
{
    char str[100];
    pf("Enter Your String: ");
    sf("%s",str);

    pf("Original String: %s\n", str);
    
    reverse(str);

    pf("Reversed String: %s\n", str);
}