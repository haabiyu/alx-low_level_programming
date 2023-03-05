#include "main.h"

/**Write a function that draws a diagonal line on the terminal.
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n);
{
    int i, j, space, n;

    for(i=1; i<=n; i++)
    {
        if(n>=0)
        {
            for(space=1; space<=(i-1); space++)
            {
                putchar(' ');
            }
            for(j=1; j<=((i+1)-i); j++)
            {
                putchar(92);
            }
            putchar('\n');
        }
        else
        {
            putchar('\n');
        }
    }
}
