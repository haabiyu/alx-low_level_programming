#include "main.h"

/**Prototype: char *_strcpy(char *dest, char *src);
 * Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * Return value: the pointer to dest
 * FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
 */

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0;src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return dest;
}
