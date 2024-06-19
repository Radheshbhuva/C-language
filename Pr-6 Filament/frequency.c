#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf
main()
{
    int cmp;
    int len = 0;
    char word[20];

    pf("Enter your Word: ");
    sf("%[^\n]", &word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        int n = 1;
        for (int j = i+1; j < len; j++)
        {
            if (word[i] == word[j])
            {
                n++;
                word[j] = '\0';
            }
        }

        if (word[i] != '\0')
        {
            pf("%c => %d\n", word[i], n);
        }
    }
}
