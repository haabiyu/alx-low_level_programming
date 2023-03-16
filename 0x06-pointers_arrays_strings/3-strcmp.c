#include "main.h"

/**Write a function that compares two strings
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 * FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
 */

int _strcmp(char *s1, char *s2)
{
    int i;

    for(i=0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        return (0);
    }
}
