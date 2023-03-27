#include "main.h"

 /**
  * _strlen - Returns the length of a string
  * 
  * @s: Pointer to the string to be measured
  * 
  * Return: Length of string
  */

int _strlen(char *s)
{
    int count = 0;	/*Initialize variable to store length of string*/

    while (*s != '\0')/*Loop until the end of the string is reached*/
    {
        count++;	/*Increment the length by 1*/
        s++;		/*Move the pointer to the next character*/
    }
    return (count);	/*Return the length of the string*/
}
