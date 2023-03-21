#include "main.h"

/**
 * main - prints the string "Holberton" from a character array.
 *
 * Write a program that prints _putchar, followed by a new line.
 *
 * Return: 0 on success.
 */

int main(void)
{
	char s[] = "_putchar";
	int i;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}

	return(0);
}
