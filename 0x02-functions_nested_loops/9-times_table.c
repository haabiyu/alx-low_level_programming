#include "main.h"

/**Write a function that prints the 9 times table, starting with 0.
 *
 *Prototype: void times_table(void);
 *Format: see example
 */

void times_table(void);
{

	int a, b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if ((a * b) > 9)
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar((a * b) + '0');
			}
			else
			{
				_putchar((a * b) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
