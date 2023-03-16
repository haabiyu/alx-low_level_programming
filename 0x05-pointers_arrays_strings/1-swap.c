#inlcude "main.h"

/**Write a function that swaps the values of two integers.
 * Prototype: void swap_int(int *a, int *b);
 */

void swap_int(int *a, int *b);
{
    int a;
    int b;
    int c;

    int *ptrA = &a;
    int *ptrB = &b;
    int *ptrC = &c;

    *ptrC = *ptrA;
    *ptrA = *ptrB;
    *ptrB = *ptrC;
}
