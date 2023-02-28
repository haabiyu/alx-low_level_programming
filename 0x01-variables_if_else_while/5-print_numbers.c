#include <stdio.h>

/**Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * All your code should be in the main function
 */

int main(void)
{
	int a=0;

	while(a<=9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");

	return(0);
}
