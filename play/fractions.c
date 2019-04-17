#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
   // string fract = get_string("Fractions to 8ths: ");
    char prod[3];
    for (int i = 0; i < strlen(fract); i++)
        {
            prod[i] = fract[i];
            printf("%c \n", prod[2]);
        }

    int store = atoi(&prod[2]);
    int love = 8/store;
    int num = atoi(&prod[0]);
    int final = num*love;
    printf("%d\n", final);
    //divide 8/prod[2] then multiply against numerator


//ampersand to get refernce to pointer locations
    // int eth = (prod * 8/8);
    // printf("%i\n", eth);

}
