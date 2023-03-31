#include "main.h"

/**
 * _strlen_recursion - finds the length of a string.
 * @s: pointer to string
 * Return: length of string
 **/

int _strlen_recursion(char *s)
{
    /* base case: empty string or end of string reached*/
    if (*s == '\0')
    {
        return 0;
    }
    /* recursive case: increment length by 1 and move to next character*/
    else
    {
        return 1 + _strlen_recursion(s + 1);
    }
}
