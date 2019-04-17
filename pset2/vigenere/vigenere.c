#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[2])
{

    //check for argument count
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }


    //this is a little redundant but works to check for letters only
    if (isalpha(argv[1] == false))
    {
        printf("Key must be alphabetical character\n");
        return 1;
    }
    char *key = argv[1];
    for (int j = 0, h = strlen(key); j < h; j++)
    {
        if (!isalpha(key[j]))
        {
            printf("Key must be alphabetical character\n");
            return 1;
        }
    }

    //declare var, prompt user for inputs to ceasar
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, p = strlen(plain), k = 0; i < p; i++)
        //checks that the plain text is alpha or skips
        if (isalpha(plain[i]))
        {

            if (isupper(plain[i]))
            {
                //cipher iterates over the characters and shifts them
                printf("%c", ((plain[i]) - 65  + (toupper(key[k])) - 65) % 26 + 65);

            }
            else if (islower(plain[i]))
            {
                printf("%c", ((plain[i]) - 97  + (toupper(key[k])) - 65) % 26 + 97);

            }
            //resets the array for the key shift
            k = (k + 1) % strlen(key);
        }
        else
        {
            printf("%c", plain[i]);
        }

    printf("\n");
    return 0;
}