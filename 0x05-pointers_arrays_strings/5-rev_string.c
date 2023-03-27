#include "main.h"
#include "string.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function prints a string in reverse.
 *
 * Return: none.
 */

void rev_string(char *s)
{
	int i, j; /* declare integer variables i and j*/
	char c; /* declare character variable c*/

	/* loop through the string, swapping characters at opposite ends until the middle is reached*/
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		/* store the character at index i in the temporary variable c*/
		c = s[i];
		s[i] = s[j];    /* set the character at index i to the character at index j*/
		s[j] = c;       /* set the character at index j to the character stored in c*/
	}
}
