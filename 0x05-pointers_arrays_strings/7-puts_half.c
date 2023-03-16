#include "main.h"

/**Prototype: void puts_half(char *str);
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str);
{
    char i;
    int len_str = 0;
    int half_str;

    for(i=0; str[i]!='\0'; i++)     //check the length of the string
    {
    	len_str++;
    }
    //printf("%d", len_str);

    half_str = len_str / 2;         //half the length of the string
    //printf("%d", half_str);

    for(i = half_str; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}
