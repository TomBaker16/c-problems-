#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main (void)
{
    // prompt user for change value in dollars and cents

 float r;

 do
 {
     r = get_float("Change owed: ");
 }
 while (r < 0);

    // convert Change owed into an integer value

    int s = round(r * 100);
    printf("%i\n", s);

    // calculate minimum number of coins needed for change

    int n = 0; // n is integer value for number of coins

    while (s >= 25)
    {
        n++;
        s = s - 25;
    }

    while (s < 25 && s >= 10)
    {
        n++;
        s = s - 10;
    }

    while (s < 10 && s >= 5)
    {
        n++;
        s = s - 5;
    }

    while (s < 5 && s >= 1)
    {
        n++;
        s = s - 1;
    }

    printf("%i\n", n);

}