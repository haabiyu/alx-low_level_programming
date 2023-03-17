#include <stdio.h>

/**
 * main - main block
 *
 * the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 *
 * Return: 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
			a++;
	putchar(a);
	a++;
	}
	putchar('\n');

	return (0);
}
