#inlcude "main.h"

/**Write a function that prints every other character of a string, starting with the first character, followed by a new line.
 * Prototype: void puts2(char *str);
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
