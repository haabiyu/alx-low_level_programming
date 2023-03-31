#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 * @n: given number
 * Return: factorial
 **/

int factorial(int n)
{
    /*define a function named "factorial" that accepts an integer "n"*/
    if (n < 0)
    {
        /*if the value of n is less than 0*/
        return -1; /*return -1 to indicate an error*/
    }
    else if (n == 0)
    {
        /*if the value of n is equal to 0*/
        return 1; /*return 1 because 0! = 1*/
    }
    else 
    {
        /*return n and the result of calling the "factorial" function with n-1 as the argument*/
        return n * factorial(n-1); 
    }
}
