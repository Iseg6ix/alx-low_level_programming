#include <string.h>
#include "main.h"
/**
 * print_rev - This function prints a strin in reverse.
 * @s: Pointer argument of the function.
 *
 * Return: Nothing.
 */
void print_rev(char *str)
{
	int i, len, temp;
	
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1 ];
		str[len - i - 1] = temp;
		_putchar(temp);
	}
}
