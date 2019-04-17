#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for positive number
    //declare variable on 7 initialize it on 11
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n <= 0 || n>=24);

    //print out that number of rows
    for (int i = 0; i < n; i++)
    {
        //print out that number of columns of " "
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf(" ");
        }

        //print out that number of columns of #
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}