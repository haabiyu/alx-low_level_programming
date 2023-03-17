#include <stdio.h>

/**
 * main - Prints multiple combinations
 *
 * prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * printed with two digits. 1 should be printed as 01
 * must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 same combination of the numbers 0 and 1
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0
 */

int main(void)
{
	int a;
		for (a = 1; a <= 99; a++)
		{
			putchar((a / 10) + '0');
			putchar((a / 10) + '0');

			putchar(' ');

			putchar((a / 10) + '0');
			putchar((a % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
}

