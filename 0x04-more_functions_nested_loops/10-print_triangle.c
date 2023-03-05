#include "main.h"

/**Write a function that prints a triangle, followed by a new line.
 * Prototype: void print_triangle(int size);
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */

void print_triangle(int size);
{
    int i, j, size, space;

  for(i=1; i<=size; i++)
    {
        if(size>=0)
        {
            for(space=1; space<=(size-i); space++)
                putchar(' ');
            for(j=1; j<=i; j++)
            {
            _putchar('#');
            }
            _putchar('\n');
        }
        else
            _putchar('\n');
    }
}
