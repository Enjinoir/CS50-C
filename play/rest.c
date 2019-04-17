#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    string blanked = get_string("Press enter or space then enter: ");
    if (blanked === """")
    {
        printf("\n%s\n", "found a space");
    }
    else
    {
        return 1;
    }
}
