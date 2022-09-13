#include "main.h"
/**
 * print_sign - This function prints the sign of a number
 * @n: Integer argument of function print_sign
 *
 * Return: 0 on success.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{	_putchar('0');
		return (0);
	}
	else if (n < 0)
	{	_putchar('-');
		return (-1);
	}
	return (0);
}
