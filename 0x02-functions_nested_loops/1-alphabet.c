#include "main.h"

/**Write a function that prints the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 */

void print_alphabet(void)
{
    char a;
    
    for(a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
    }
    putchar('\n');
}
