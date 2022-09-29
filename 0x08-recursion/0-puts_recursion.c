#include <string.h>
#include "main.h"
/**
 * _puts_recursion - This function prints a string, followed by a new line.
 * @s: This pointer argument of the function.
 *
 * Return: 0 on success.
 */
void _puts_recursion(char *s)
{
	int l = strlen(s);

	while (l > 0)
	{
		_putchar(s);
	l++;
	}
	_putchar('\n');
}
