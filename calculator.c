#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for x
    int x = get_int("x: ");

    // ask user for y
    int y = get_int("y: ");

    // addition
    int z = x + y;

    // give result
    printf("z: %i\n",z);
}
