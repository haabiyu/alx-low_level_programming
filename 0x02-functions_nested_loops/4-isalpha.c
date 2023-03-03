#include "main.h"

/**Write a function that checks for alphabetic character
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 */

int _isalpha(int c);
{
 if(c >= 65 && c <= 90 || c >= 97 && c <= 122)
        return(1);
    else
        return(0);
}
