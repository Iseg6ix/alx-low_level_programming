#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - This function prints a strin in reverse.
 * @s: Pointer argument of the function.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
