#include <stdio.h>

/**
 * main - main block
 *
 * prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 0;

	while (a < 100)
	{
		b = a % 10; /* singles digit */
		c = a / 10; /* doubles digit */

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');

			if (a < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}

		a++;
	}
	putchar('\n');

	return (0);
}
