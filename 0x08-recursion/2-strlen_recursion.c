#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - This function prints out the length of a string.
 * @s: The pointer argument of the function.
 * 
 * Return: 0 on success.
 */

#include "main.h"

/** _strlen_recursion - The function prints out a string in reverse
 * *s: string variable
 * Return: *s
 */
int _strlen_recursion(char *s)
{
        int i = 1;

        if (*(s + 1) == '\0')
                return 0;
        else
        {
                i += _strlen_recursion(s + 1);
                i++;
        
        }
        return i;
}
int main(void)
{
    int a = _strlen_recursion("bad");
    printf("%d", a);
    return 0;
}