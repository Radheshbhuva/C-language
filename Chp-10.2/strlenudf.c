#include <stdio.h>
#include <string.h>
#define pf printf
#define sf scanf

int stringLength(char str[])
{
    int length = 0;

    length++;

return length;
}

int main()
{
    char name[20];
    pf("Enter Your Name (String): ");
    sf("%s", name);
    int len=strlen(name);

    printf("Length of the string \"%s\" is: %d\n", name, len);

    return 0;
}