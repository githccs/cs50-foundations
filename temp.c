#include <cs50.h>
#include <stdio.h>

float convert(float c);

int main(void)
{
    float celsius = get_float("Temperature in C: ");
    printf("if C = %.2f, F = %.2f\n",celsius, convert(celsius));
}

float convert(float c)
{
    return (c * 9.0/5.0) + 32;
}
