#include <stdio.h>

/**
 * main - main block
 *
 * lowercase alphabet in reverse, followed by a new line.
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
