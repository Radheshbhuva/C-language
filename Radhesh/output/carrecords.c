#include <stdio.h>
#define pf printf
#define sf scanf


struct car
{
    char model[50];
    int year;
    float price;
};

void main() 
{
    int r;
    pf("Enter the number of cars: ");
    sf("%d", &r);

    
   struct car s1[r];

    for (int i = 0; i < r; i++)
    {
        pf("Enter car %d details:\n", i + 1);
        pf("Model: ");
        sf("%s", s1[i].model);
        pf("Year: ");
        sf("%d", &s1[i].year);
        pf("Price: ");
        sf("%f", &s1[i].price);
    }

    pf("\nCar Details:\n");
    for (int i = 0; i < r; i++) 
    {
        pf("Car %d:\n", i + 1);
        pf("Model: %s\n", s1[i].model);
        pf("Year: %d\n", s1[i].year);
        pf("Price: %.2f\n\n", s1[i].price);
    }
}