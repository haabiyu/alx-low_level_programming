#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: char to encode
 * Return: @c char
*/

char *leet(char *str)
{
    int i, j;
    char *leet_str = str;
    
    /* loop through each character in the string until null terminator*/
    for (i = 0; str[i] != '\0'; i++) 
    {
        /* Check if the current character is 'a' or 'A'*/
        if (str[i] == 'a' || str[i] == 'A') 
        {
            /* If it is, replace it with '4'*/
            leet_str[i] = '4';
        } 
        /* Check if the current character is 'e' or 'E'*/
        else if (str[i] == 'e' || str[i] == 'E') 
        {
            /* If it is, replace it with '3'*/
            leet_str[i] = '3';
        }
        /* Check if the current character is 'o' or 'O'*/
        else if (str[i] == 'o' || str[i] == 'O') 
        {
            /* If it is, replace it with '0'*/
            leet_str[i] = '0';
        } 
        /* Check if the current character is 't' or 'T'*/
        else if (str[i] == 't' || str[i] == 'T') 
        {
            /* If it is, replace it with '7'*/
            leet_str[i] = '7';
        } 
        /* Check if the current character is 'l' or 'L'*/
        else if (str[i] == 'l' || str[i] == 'L') 
        {
            /* If it is, replace it with '1'*/
            leet_str[i] = '1';
        }
  }

  return leet_str;
}
