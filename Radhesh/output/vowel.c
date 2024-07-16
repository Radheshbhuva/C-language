#include <stdio.h>
#define pf printf
#define sf scanf

void main() 
{
    char ch;

    pf("Enter any Character: ");
    sf("%c", &ch);

    switch(ch) 
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            pf("%c is a vowel.\n", ch);
            break;
        default:
            if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') 
            {
                pf("%c is a Consonant.\n", ch);
            } else {
                pf("%c is Invalid Input, So Check Your Input first.\n", ch);
            }
    }
}