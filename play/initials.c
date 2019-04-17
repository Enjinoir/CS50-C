#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    string name = get_string("Name ");
    char initials[5];
    int counter = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        if (isupper(name[i]))
        {
            initials[counter] = name[i];
            counter ++;
        }
    }
    initials[counter] = '\0';
    printf("%s\n", initials);
}