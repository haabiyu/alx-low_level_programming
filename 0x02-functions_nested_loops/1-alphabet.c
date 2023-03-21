#include "main.h"

/**
 * print_alphabet - use only user defined variables to create output
 *
 * Description: Write program to print "a to z" using _putchar
 * You can only use _putchar twice in your code
 *
 * Return: always success
 */

void print_alphabet(void)
{
   char a;

   for (a = 'a'; a <= 'z'; a++)
   {
	_putchar(a);
   }
_putchar('\n');
}
