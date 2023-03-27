#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a newline
 * @s: pointer to the string to print
 */

void print_rev(char *s)
{
	int len = 0;
	char *t = s;

	/* find the length of the string */
	while (*t)
	{
		len++;
		t++;
	}

	/* print the string in reverse */
	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}

	/* print a newline */
	_putchar('\n');
}
