#include <stdio.h>

/**Each new term in the Fibonacci sequence is generated by adding the previous two terms.
 * By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 * By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000,
 * write a program that finds and prints the sum of the even-valued terms, followed by a new line.
 * You are allowed to use the standard library
 */

int main(void)
{
	long int a, b, c, d;
	int n;

	a = 1;
	b = 2;
	d = 0;

	for (n = 0; ; n++)
	{
            c = a + b;
			a=b;
			b=c;

			if(c%2 == 0)
			{
			    d = d + c;
			}
			if(c >4000000)
			{
			    break;
			}
	}
	printf("%ld\n", d);
	return (0);
}
