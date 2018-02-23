#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

 int counter = 0;
    long long c;

    // prompt user for a credit card number

    do
    {
        c = get_long_long("Credit Card Number: ");
    }
    while (c < 0 || c < 10e11);

    // card number established
    // now find how many digits are in the card number
    long long ctemp = c;
    do
    {
       ctemp /= 10;
       counter++;
    }
    while (ctemp);

      // counter is the number of digits, now find if the card number has too many digits and if so it's invalid.

      if (counter > 16)
      {
       printf("INVALID\n");
      }

    // state if card is AMEX (15; 34, 37), MASTERCARD (16; 51, 52, 53, 54, 55), VISA (13 & 16, 4)

    int q = 0;
    if (counter == 16)
    {
        q = c / 10e13;

        if (q > 39 && q < 50)
         {
        printf("VISA\n");
         }
          else if (q > 50 && q < 56)
          {
               printf("MASTERCARD\n");
          }
           else
            {
                printf("INVALID\n");
            }
    }
  if (counter == 15)
  {
      q = c / 10e12;

      if (q == 34 || q == 37)
      {
          printf("AMEX\n");
      }
      else
      {
          printf("INVALID\n");
      }

  }
  if (counter == 14)
  {
   printf("INVALID\n");
  }
  if (counter == 13)
  {
      q = c / 10e11;

      if (q == 4)
      {
          printf("VISA\n");
      }
      else
      {
          printf("INVALID\n");
      }
  }

return 0;
}