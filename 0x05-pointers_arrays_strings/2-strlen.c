#include "main.h"

/**Write a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 * FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
 */

int _strlen(char *s);
{
    int count = 0;

    while(s[i] != '\0')
    {
        count++;
        i++;
    }
    return(count);
}
