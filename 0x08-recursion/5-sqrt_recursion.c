#include "main.h"

/**
*find_sqrt - Helper function that actually calculates square root.
*@n: Number to calculate square root of.
*@i: Counter variable that starts at 1.
*
*Return: The natural square root of the number n.
*/

int find_sqrt(int n, int i)
{
    /* If i squared is greater than n, return -1 */
    if (i * i > n)
    return (-1);
    /* If i squared is equal to n, return i */
    else if (i * i == n)
    return (i);
    /* Otherwise, increment i and recursively call the find_sqrt function */
    else
    return (find_sqrt(n, i + 1));
}

/**
*_sqrt_recursion - Returns the natural square root of a number.
*@n: Number to calculate square root of.
*
*Return: The natural square root of the number n, or -1 if no natural
* square roots.
*/

int _sqrt_recursion(int n)
{
    /* If n is less than 0, or no square root exists, return -1 */
    if (n < 0)
    return (-1);
    /* If n is 0 or 1, the square root is n */
    else if (n == 0 || n == 1)
    return (n);
    /* Recursively call _sqrt_recursion to find the root */
    else
    return (find_sqrt(n, 1));
}
