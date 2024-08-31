#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int days;
    float pennies;

    do
    {
        days = get_int("Days in month: ");
    }
    while ((days < 28) || (days > 31));
    do
    {
        pennies = get_float("Pennies on first day: ");
    }
    while (pennies <= 0);

    printf("$%.2lf\n",(pennies * pow(2, days) - pennies )/ 100);
}
