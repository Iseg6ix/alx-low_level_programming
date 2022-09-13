#include "main.h"
/**
 * main - uses void print_alphabet to print out the alphabets
 * twice in 2 lines.
 *
 * Return: Void on success.
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a', a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
