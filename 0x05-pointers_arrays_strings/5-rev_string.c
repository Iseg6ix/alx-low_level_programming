#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - This function prints a strin in reverse.
 * @s: Pointer argument of the function.
 *
 * Return: Nothing.
 */
void rev_String(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		_putchar(*(s + i));
	}
}
