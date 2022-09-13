#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: Argument for the above function
 *
 * Return: 0 on success.
 */
int print_last_digit(int a)
{
	int mod = a % 10;
	_putchar(mod);
	return(mod);
	_putchar('\n');
	return (0);
}
