#include <stdio.h>
#define fpf fprintf

void main()
{

    FILE *evenFile = fopen("even_file.txt", "w");
    FILE *oddFile = fopen("odd_file.txt", "w");

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fpf(evenFile, "%d, ", i);
        }
        else
        {
            fpf(oddFile, "%d, ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

}