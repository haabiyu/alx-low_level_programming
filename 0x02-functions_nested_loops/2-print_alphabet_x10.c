#include "main.h"

/**Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 */

void print_alphabet_x10(void);
{
    char a;
    int b;
    
    for(b = 1; b <= 10; b++)
    {
        for(a = 'a'; a <= 'z'; a++)
        {
            putchar(a);
        }
        putchar('\n');
    }
}
