#inlcude "main.h"

/**Write a function that prints a string, in reverse, followed by a new line.
 * Prototype: void print_rev(char *s);
 */

void print_rev(char *s);
{
    int i;
    int count = 0;
    char ch;
    
    while(s[i] != '\0')   //counting the length of the string
    {
        count++;
        i++;
    }
    
    for(i = 0; i < (count/2);i++)   //writing the string in reverse
    {
        ch = s[i];
        s[i] = s[count - 1 - i];
        s[count - 1 - i] = ch;
    }
    
    for(i = 0; s[i] != '\0';i++)  //print the string in reverse
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
