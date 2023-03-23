#include "main.h"

/**
 * more_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
    int i;

    for (i = 0; i <= 14; i++)
    {
        if (i > 9)
        {
            putchar((i/10) + '0');
            putchar((i%10) + '0');
        }
        else
        {
            putchar((i%10) + '0');
        }
    }
}
