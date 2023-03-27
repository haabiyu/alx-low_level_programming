#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: Pointer with the address value.
 *
 * Return: none.
 */

void _puts(char *str)
{
	int i;

	/* check if the character is not null,
	 * if true then go inside the loop*/
	while (str[i] != '\0')
	{
		/* call our _putchar function instead of printf*/
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');	/* print new line after printing the string*/
}
