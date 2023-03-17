#include <stdio.h>

/**
 * main - main block
 *
 * single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar twice in your code
 * All your code should be in the main function
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');

	return (0);
}
