#include <cs50.h>
#include <stdio.h>
#include <math.h>

float get_change_owed(string prompt);

int main(void)
{
    float change_owed = get_change_owed("Change Owed: ");
    int change_owed_cents = round(change_owed * 100);
    int count = 0;

//     TODO:  I need to refactor this to use modulo math
    while (change_owed_cents > 24)
    {
        change_owed_cents -= 25;
        count++;
    }
    while (change_owed_cents > 9)
    {
        change_owed_cents -= 10;
        count++;
    }
    while (change_owed_cents > 4)
    {
        change_owed_cents -= 5;
        count++;
    }
    while (change_owed_cents >= 1)
    {
        change_owed_cents -= 1;
        count++;
    }
    printf("%i\n", count);
}

float get_change_owed(string prompt)
{
    float f;
    do
    {
        f = get_float("%s", prompt);
    }
    while (f < 0);
    return f;
}