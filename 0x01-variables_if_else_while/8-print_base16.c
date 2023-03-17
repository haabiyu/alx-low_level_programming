#include <stdio.h>

/**
 * main - main block
 *
 * numbers of base 16 in lowercase, followed by a new line
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 *
 * Return: 0
 */

int main(void)
{
	char a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
