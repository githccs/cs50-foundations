#include <stdio.h>
#include <cs50.h>

float tip(int bill);

int main(void)
{
    int money = get_int("How much is the bill?: ");
    printf("Bill is %i, Tip is %.2f\n",money, tip(money));
}


float tip(int bill)
{
    return bill * 0.2;
}
