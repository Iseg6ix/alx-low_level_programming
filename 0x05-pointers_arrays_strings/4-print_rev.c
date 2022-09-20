#include <string.h>
#include "main.h"
/**
 * print_rev - This function prints a strin in reverse.
 * @s: Pointer argument of the function.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int a = strlen(s);

	for (s <= a; s++;)
		_putchar(s);
}
