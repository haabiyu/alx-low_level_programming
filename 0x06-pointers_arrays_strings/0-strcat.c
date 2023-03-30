#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
    /* i and j are used to iterate over the dest and src strings respectively */
    int i = 0, j = 0;
    
    while (dest[i] != '\0')
    i++;    /* iterate over the dest string until null byte is reached */
    
    while (src[j] != '\0')
    {
        /* append each character of the src string to the dest string */
        dest[i] = src[j]; 
        i++;
        j++;
    }
    
    dest[i] = '\0'; /* add a terminating null byte to the resulting string */
    
    return dest; /* return a pointer to the resulting string dest */
}
