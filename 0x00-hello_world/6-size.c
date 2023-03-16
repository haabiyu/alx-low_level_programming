#include <stdio.h>

/**
 * main - Entry point
 * Program that prints the size of various types
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %ld byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a lont int: %ld byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of a float: %ld byte(s)\n",(unsigned long)sizeof(float));

	return (0);
}
