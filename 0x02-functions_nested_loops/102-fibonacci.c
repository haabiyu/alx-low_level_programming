#include "stdio.h"

/**
 * Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space ,
 * You are allowed to use the standard library
 * Return: 0
 */

int main(void)
{
	long int a, b, c;
	int n;

	a = 1;
	b = 2;

	for (n = 0; n <= 50; n++)
	{
        	c = a + b;
		printf("%ld, ", c);
		a=b;
		b=c;
	}
	printf("\n"0);
	return (0);
}
