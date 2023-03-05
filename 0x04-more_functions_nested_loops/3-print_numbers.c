#include "main.h"

/**Write a function that prints the numbers, from 0 to 9, followed by a new line.
 *
 * Prototype: void print_numbers(void);
 * You can only use _putchar twice in your code
 */

void print_numbers(void);
{
	int a;

	for(a=0; a<=9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
