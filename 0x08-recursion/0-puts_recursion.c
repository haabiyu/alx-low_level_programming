#include "main.h"

/**
  * _puts_recursion - prints a string, followed by a new line
  * @s: pointer to string
  * Return: nothing
  **/

void _puts_recursion(char *s)
{
    /* if the first character is not null-terminating*/
    if (*s)  
    {
        _putchar(*s); /* print the first character*/ 
        /* call the function recursively with the rest of the string*/
        _puts_recursion(s + 1);  
    }
    /* if the first character is null-terminating (i.e. end of string)*/
    else  
    {
        _putchar('\n'); /* print a new line character*/ 
    }
}
