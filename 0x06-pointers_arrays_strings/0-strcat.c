#include "main.h"

/**Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
 */

char *_strcat(char *dest, char *src)
{
    int i = 0, len_dest = 0, len_src = 0;

    while(dest[i] != '\0')  // finding the length of the first string
    {
        len_dest++;
        i++;
    }
    //printf("%d\n", len_dest);<-------- to check the length of the first string

    i = 0;
    while(src[i] != '\0')   // finding the lenght of the second string
    {
        len_src++;
        i++;
    }
    //printf("%d\n", len_src); <-------- to check the length of the second string

    for(i=0; i < len_src; i++)  // concatinating the second string to the first string
    {
        dest[len_dest + i] = src[i];
    }
    return (dest);
}
