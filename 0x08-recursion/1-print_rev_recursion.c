#include "main.h"

/**
  * _print_rev_recursion - prints a string in reverse, followed by a new line
  * @s: pointer to string
  * Return: nothing
  **/

void _print_rev_recursion(char *s)
{
    /*base condition*/
    if (*s)
    {
        /*recursive call to print the string after the current character*/
        _print_rev_recursion(s + 1);
    }
    _putchar(*s); /*print the current character*/
}
