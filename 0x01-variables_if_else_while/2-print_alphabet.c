#include <stdio.h>

/**Write a program that prints the alphabet in lowercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 */

int main(void)
{
	char a;

	for(a = 97; a <= 122; a++)
		putchar(a);
	putchar('\n');
	return(0);
}
