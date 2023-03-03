#include "main.h"

/**Write a function that prints the last digit of a number.
 *
 *Prototype: int print_last_digit(int);
 *Returns the value of the last digit
 */

int print_last_digit(int r);
{
   int a;

   if(a >=0)
    {
        a = r % 10;
    }
    else
        a = (r %10) * -1;
    _putchar(a + "0");
   return(a);
}
