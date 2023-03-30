#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: First string to compare
* @s2: Second string to compare
*
* Return: An integer less than, equal to or greater than zero depending
* on whether the first string is less than, equal to or greater
* than the second string.
*/

int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* Iterate through both strings, comparing the character at each index */
    while (s1[i] && (s1[i] == s2[i]))
    i++;

    /* Return the difference in character values at the first non-matching index */
    return (s1[i] - s2[i]);
}
