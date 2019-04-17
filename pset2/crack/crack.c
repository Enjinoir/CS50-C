#define _XOPEN_SOURCE
#include <unistd.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[2])
{



    if (argc != 2)
    {
        printf("Need a hashed password, ERROR!\n");
        printf("Usage: ./crack hash");
        return 1;
    }

    //char *hash = (argv[1] + 2);
    const char *rain = "EARIOTNSLCUDPMHGBFYWKVXZJQeariotnslcudpmhgbfywkvxyjq";
    const char *salt[2];
    salt[0] = (argv[0]);
    salt[1] = (argv[1]);


    for (int i = 0, r = strlen(rain); i < r; i++)
    {
        const char *pass = (crypt(rain + i, salt[1]));
        if (pass == argv[1])
        {
             printf("password: %c", pass[i]);
        }

        for (int j = 0, t = strlen(rain); j < t; j++)
        {
            const char *r2[] = (rain + i, rain + j);
            const char *pass2 = (crypt(r2[2], salt[1]));
            if (pass2 == argv[1])
            {
                 printf("password: %c", pass2[i]);
            }
        }
        //use array of arrays
        //so just like salt but with rain

    }



    printf("password: %c", pass[i]);
    printf("\n");
}