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

    //does work to count coins (i)
    int i = 0;
    while (n >= 25)
    {
        n -= 25;
        i++;
    }
        while (n >= 10 && n < 25)
    {
        n -= 10;
        i++;
    }
        while (n >= 5 && n < 10)
    {
        n -= 5;
        i++;
    }
        while (n >= 1 && n < 5)
    {
        n -= 1;
        i++;
    }
    printf("%i\n", i);

    //prints space for breaks
    printf("\n");


// try to get a loop to iterate over an array
  for (int j = 0; j < 4; j = j + 1) //created a loop of an array
    {
        //check c[j] if less than
        if (c[j] < n && n > 0)
        {
            n = n - c[j];
            i++;

        }
            //i plus c[j]      , i <= n
        else
        {

        }    //iterate J
    }

}
//from here down to copy out for the other way
//  while (n >= c[])
//  {
//      n -= c[];
//      i++;
//  }
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

