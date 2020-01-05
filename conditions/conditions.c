#include <stdio.h>

int main()
{
    int target = 10;
    if (target == 10)
    {
        printf("Target equal to 10\n");
    }

    if (target != 10)
    {
        printf("Target is not 10");
    }

    int peanuts_eaten = 22;
    int peanuts_in_jar = 100;
    int max_peanut_limit = 50;

    if (peanuts_in_jar > 80)
    {
        if (peanuts_eaten < max_peanut_limit)
        {
            printf("Take as many peanuts as you want!\n");
        }
    }
    else
    {
        if (peanuts_eaten > peanuts_in_jar)
        {
            printf("You can't have anymore peanuts!\n");
        }
        else
        {
            printf("Alright, just one more peanut.\n");
        }
    }

    // the usual operators
    // && = and
    // || = or
}