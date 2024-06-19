#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf
main()
{
    char name[20];
    char rev[20];
    int len = 0;
    int n = 0;
    int i,cmp;
    pf("Enter Your Word: ");
    sf("%[^\n]", &name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    for (i = len - 1; i >= 0; i--)
    {
        rev[n++] = name[i];
    }
    for (i = 0; i < len; i++)
    {
        if (name[i] == rev[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0)
    {
        pf("Your Word is Palidrome");
    }
    else
    {
        pf("Your word is not a Palidrome");
    }
}