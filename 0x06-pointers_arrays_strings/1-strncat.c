#include "main.h"

/**
*_strncat - Funtion
*
*@dest: Destiny
*@src: Source
*@n: Variable
*Return: Destiny
*/

char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;

    /* Find the length of the destination string*/
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Concatenate the strings*/
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Terminate the string*/
    dest[dest_len + i] = '\0';

    /* Return a pointer to the destination string*/
    return dest;
}
