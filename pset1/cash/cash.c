#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //declares n as float prompted by user, checks that input is positive
    float n;
    do
    {
        n = get_float("change:  ");
    }
    while (n <= -0);

    //converts float to int by multiply and rounding
    n = round(n * 100);

    //does work to count coins by iterating over an array (kindof)
    int i = 0;
    int c[] = {25, 10, 5, 1};

    //while loops evaluate array positions
    while (n >= c[0])
    {
        n -= c[0];
        i++;
    }
    while (n >= c[1])
    {
        n -= c[1];
        i++;
    }
    while (n >= c[2])
    {
        n -= c[2];
        i++;
    }
    while (n >= c[3])
    {
        n -= c[3];
        i++;
    }
    //prints the number of coins given
    printf("Coins given:  %i\n", i);
}