#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: base
* @y: power
* Return: x to the power of y.
*/

int _pow_recursion(int x, int y)
{
    /* if y is negative */
    if (y < 0) 
    return (-1); /* return -1 as per function prototype */
    
    /* anything to the power of 0 is 1 */
    if (y == 0) 
    return (1);
    
    /* recursive call to function with y-1 as power */
    return (x * _pow_recursion(x, y - 1)); 
}
