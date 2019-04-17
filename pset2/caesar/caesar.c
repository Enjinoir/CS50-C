#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


//starting argument

int main(int argc, string argv[2])
{


    //checking argument for required inputs
    if (argc != 2)
    {
        printf("Need a Key, ERROR!\n");
        return 1;
    }

    //converting the key and checking for int
    int key = atoi(argv[1]);
    if (key <= -0)
    {
        printf("Key must be a positive int\n");
        abort();
    }

    //declare var, prompt user for inputs to ceasar
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0, p = strlen(plain); i < p; i++)
        if (isupper(plain[i]))
        {
            //cipher work for uppercase
            printf("%c", ((plain[i]) - 65  + key) % 26 + 65);
        }
        else if (islower(plain[i]))
        {
            //cipher work for lowercase
            printf("%c", ((plain[i]) - 97  + key) % 26 + 97);
        }
        else
        {
            //ignore if not a letter
            printf("%c", plain[i]);
        }

    printf("\n");
    return 0;
}