#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    char name[20];

    pf("Enter your NAME : ");
    sf("%[^\n]", &name);


    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] += 32;
        }
        else if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] -= 32;
        }
    }

    pf("name\t: %s", name);
}