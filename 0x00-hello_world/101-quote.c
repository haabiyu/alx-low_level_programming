#include <stdio.h>

/**
 * main - print string
 * Return: 1 (Success)
 **/

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\0');
	return (1);
}
