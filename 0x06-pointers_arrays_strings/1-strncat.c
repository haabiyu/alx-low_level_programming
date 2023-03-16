#include "main.h"

/**Write a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 * FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.
 */
char *_strncat(char *dest, char *src, int n)
{
    int len_dest = 0, len_src, i;

    for(len_dest=0; *(dest + len_dest) != '\0'; )
        len_dest++;
    //printf("\n%d\n\n", len_dest); <----- to check the string length of dest

    for(len_src = 0; len_src < n; len_src++)
    {
        *(dest + len_dest) = *(src + len_src);
        if (*(src + len_src) == '\0')
			break;
		len_dest++;
    }
    return(dest);
}
