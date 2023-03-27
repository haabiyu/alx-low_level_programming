#include "main.h"
#include "string.h"

/**
 * rev_string - main function.
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

	/* loop the string, swapping characters at opposite ends until the middle*/
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		/* store the character at index i in the temporary variable c*/
		c = s[i];
		s[i] = s[j];    /* set the character at index i to the character at index j*/
		s[j] = c;       /* set character at index j to the character stored in c*/
	}
}
