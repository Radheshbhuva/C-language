#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int size1, size2;
    pf("Enter First Array size: ");
    sf("%d", &size1);

pf("Enter First Array size: ");
    sf("%d", &size2);

    int a[size1], b[size2];

    pf("\n\n Enter First Array Element... \n\n");
    for (int i = 0; i < size1; i++)
    {
        pf("Enter a[%d]: ", i); 
        sf("%d", &a[i]);
    }
  
    pf("\n\n Enter Second Array Elements... \n\n");
    for (int i = 0; i < size2; i++)
    {
        pf("Enter b[%d]: ", i);
        sf("%d", &b[i]);
    }
    int mergedArr[size1 + size2];

     pf("Your Merged Array is: ");

    for (int i = 0; i < size1 + size2; i++) {
        if (i < size1) {
            mergedArr[i] = a[i];
        } else {
            mergedArr[i] = b[i - size1];
        }
        printf("%d", mergedArr[i]);
        if (i != size1 + size2 - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
