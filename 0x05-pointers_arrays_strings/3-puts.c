#include "main.h"

/**
 * _puts - main function.
 * @str: Pointer with the address value.
 * Description: This function takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 * Return: none.
 */

void _puts(char *str)
{
	int i;

	/* check if the character is not null,
	 * * if true then go inside the loop*/
	while (str[i] != '\0')
	{
		/* call our _putchar function instead of printf*/
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');	/* print new line after printing the string*/
	
	return 0;
}
