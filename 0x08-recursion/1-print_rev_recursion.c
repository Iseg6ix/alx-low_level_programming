#include "main.h"
/**
 * _print_rev_recursion - This function prints a string in reverse.
 * @s: This is the pointer argument that points to a given parameter.
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	int i = strlen(*s);
	char a[i];

	if (*s)
	{
		_putchar(
