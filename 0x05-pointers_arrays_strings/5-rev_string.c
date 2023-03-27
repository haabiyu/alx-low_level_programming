#include "main.h"

/**
 * print_rev - main function.
 * @s: Pointer, the string to print.
 *
 * Description: This function prints a string in reverse.
 *
 * Return: none.
 */

void rev_string(char *s)
{
    int i;
    int count = 0;
    char ch;
    
    while(s[i] != '\0')   //counting the length of the string
    {
        count++;
        i++;
    }
    
    for(i = 0; i < (count/2);i++)   //writing the string in reverse
    {
        ch = s[i];
        s[i] = s[count - 1 - i];
        s[count - 1 - i] = ch;
    }
    
    for(i = 0; s[i] != '\0';i++)  //print the string in reverse
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
