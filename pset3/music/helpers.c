// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    // establish array to hold string values
    char prod[3];

    // for loop sets up array from parsed string
    for (int i = 0; i < strlen(fraction); i++)
        {
            prod[i] = fraction[i];
            //check values
            //printf("%c \n", prod[2]);
        }

    // math to get the eigth notes
    int denom = atoi(&prod[2]);
    int gcd = 8/denom;
    int num = atoi(&prod[0]);
    int final = num*gcd;
    return final;

    //check values
    //printf("%d\n", final);

    //divide 8/prod[2] then multiply against numerator
    //ampersand to get refernce to pointer locations
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (is_rest == ("\r" || "\n" || "\r\n") && != null)
        {
            return "\n";
        }

}
