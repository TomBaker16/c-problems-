
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("I'm sorry, what?\n");

        return 1;
    }

    // lets turn string k into an integer

    int k = atoi(argv[1]);

    if (k <= 0)     // prints "try again" if a non-numerical key is entered
    {
        printf("try again\n");

        return 1;
    }

    // lets prompt the user for the plaintext to be encrypted

    string plaintext;

    plaintext = get_string("plaintext: ");

    // lets encipher the plaintext

    int sl = strlen(plaintext);  //first declare int for string length
    printf("ciphertext: ");
    for (int i = 0; i < sl; i++)   // now lets look at each element (i) of the string
    {

        if isupper(plaintext[i])   // boolean is true for ith elements of plaintext which are uppercase
        {
            char c = (((plaintext[i] + k) - 65) % 26) + 65; // moves ascii value of c by the key value,
            printf("%c", c);                                // also creates a wrap-around alphabetical index
        }
        else if islower(plaintext[i])  // boolean is true for ith elements of plaintext which are lowercase
        {
            char c = (((plaintext[i] + k) - 97) % 26) + 97;
            printf("%c", c);
        }
        else
        {
            printf("%c", plaintext[i]); // prints any character of plaintext which isn't a lower or upper case letter
        }

    }

    printf("\n");

    return 0;

}
