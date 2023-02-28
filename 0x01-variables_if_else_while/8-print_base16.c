#include <stdio.h>

/**Write a program that prints all the numbers of base 16 in lowercase, followed by a new line
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 */

int main(void)
{
	char a, b;

	for(a='0'; a<='9'; a++)
		putchar(a);
	for(b='a'; b<='f'; b++)
		putchar(b);
	putchar('\n');

	return(0);
}
