#include "main.h"
/**
 * _strlen_recursion - This function prints out the length of a string.
 * @s: The pointer argument of the function.
 * 
 * Return: 0 on success.
 */
int _strlen_recursion(char *s)
{
    	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}