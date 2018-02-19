#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // create prompt for height from user

  int n;
  do
  {
    n = get_int("Height: ");
  }
  while (n < 0 || n > 23);

// create pyramid

// start of loop that creates rows (i), starting with i=0
  for (int i = 0; i < n; i++)
  {
    // print spaces (j) on each row
    for (int j = 0; j < (n - i - 1); j++)
    {
        printf(" ");
    }
    // print hashes (k) on each row
    for (int k = 0; k < (i + 1); k++)
    {
        printf("#");
    }
    printf("\n"); // starts next row
  }    // end of loop
}