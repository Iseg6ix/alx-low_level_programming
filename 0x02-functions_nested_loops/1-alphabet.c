#include "main.h"
/**
 * main - uses void print_alphabet to print out the alphabets
 * twice in 2 lines.
 *
 * Return: 0 on success.
 */
int print_alphabet(void)
{
	int a;

	for (a = "a", a <= "z" a++)
		_putchar(a);
	_putchar('\n');
	return (0);
}
