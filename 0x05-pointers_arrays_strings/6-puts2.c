#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints every other character of a string
 * (divisible by two)
 * Return: none.
 */

void puts2(char *str);
{
    int i;

    for(i=0; str[i]!='\0'; i++)
       {
           putchar(str[i]);
           i++;
       }
    _putchar('\n');
}
