#include "main.h"


/**
* is_prime_helper - Helper function for is_prime_number
* @n: The integer to be checked
* @divisor: The current divisor being checked
*
* Return: 1 if @n is a prime number, 0 otherwise
*/

int is_prime_helper(int n, int divisor)
{
    /* Base case: n is divisible by divisor */
    if (n % divisor == 0)
    return (0);
    
    /* Base case: divisor is greater than sqrt(n) */
    if (divisor * divisor > n)
    return (1);
    
    /* Recursively call is_prime_helper with incremented divisor */
    return (is_prime_helper(n, divisor + 2));
}

/**
* is_prime_number - Checks if a given integer is a prime number
* @n: The integer to be checked
*
* Return: 1 if @n is a prime number, 0 otherwise
*/

int is_prime_number(int n)
{
    /* Base cases */
    if (n <= 1)
    return (0);
    else if (n <= 3)
    return (1);
    
    /* Check if n is divisible by 2 or 3 */
    else if (n % 2 == 0 || n % 3 == 0)
    return (0);
    
    /* Check if n is divisible by any number from 5 to sqrt(n) */
    return (is_prime_helper(n, 5));
}

