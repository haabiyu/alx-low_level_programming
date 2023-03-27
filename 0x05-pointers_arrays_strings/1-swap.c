#include "main.h"

/**
 * swap_int - main function.
 * @a: Pointer with the address value.
 * @b: Pointer with the address value.
 * Description: This function takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 *
 * Return: none.
 */

void swap_int(int *a, int *b)
{
	/*Declaring a temporary variable to hold the value of a*/
	int temp;

	/*Assigning the value of a to the temporary variable*/
	temp = *a;
	/*Assigning the value of b to a*/
	*a = *b;
	/*Assigning the value of a (which was stored in tmp) to b*/
	*b = temp;
}
