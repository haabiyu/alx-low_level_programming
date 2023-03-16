#include "main.h"

/**Write a function that copies a string.
 * Prototype: char *_strncpy(char *dest, char *src, int n);
 * Your function should work exactly like strncp
 * FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for ( ; i < n; i++)
        dest[i] = '\0';

    return dest;
}
