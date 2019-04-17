#include <math.h>
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    string note = get_string("note: ");

//decalre bases (440,etc.)
//Convert to char array
//check [1]
    //got to base section
    //you have create the range, then loop and scan through for the match that would be for objects....switch case maybe?
    //for loop to match then take i's value use greater or less than if statement
    //need to match to an array index that starts at the center of an array
    //there has to be a mathmatical rhythm I can take advantage of
    //use letter math from previous lesson then something that number of octaves             printf("%c", s[i] - ('a' - 'A'));
    char notate[3];

    for (int i = 0; i < strlen(note); i++)
        {
            notate[i] = note[i];
            printf("%c \n", prod[2]);
        }

    char scale[7] = ('C','D','E','F','G','A','B')

    for(i=0; i<strlen(scale); i++)
    {
        if(notate[0] == i)
        {
            int keystore = i;
        }
    }

    if(notate[1] != '#' || 'b')
        {
            if(natate[0])
        }
    else if (keystore)
    double cBase = 16; //need to find a good way to make this recursive
    double n = powe[0];
    double soundup = (base * (pow(2, n/12)));
    double sounddown = (base / (pow(2, n/12)));



    // char powe[4];

    // // double powe;
    // printf("%s\n", powe);
    // for(int i = 0; i < strlen(fract); i++)
    // {
    //     powe[i] = fract[i];
    //     printf("%c\n", powe[i]);
    // }

    // int num = atoi(&powe[0]);
    // int den1 = concat(&powe[2], &powe[3]);
    // int den2 = atoi(den1);
    // double freq = 440 * (pow(2,num/den2));
    // printf("%f\n", freq);

}
