#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j, space, n;

	for (i = 1; i <= n; i++)
	{
		if (n >= 0)
		{
			for (space = 1; space <= (i-1); space++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= ((i + 1) - i); j++)
			{
				_putchar(92);
			}
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
