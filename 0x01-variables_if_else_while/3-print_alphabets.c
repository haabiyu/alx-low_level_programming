#include <stdio.h>

/*Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 */

int main(void)
{
	char a;

	for(a='a'; a<='z'; a++)
		putchar(a);
	for(a='A'; a<='Z'; a++)
		putchar(a);
	putchar('\n');

	return(0);
}
