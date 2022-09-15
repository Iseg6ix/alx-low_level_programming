#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if the argument passed is in uppercase
 * @c: argument passed to the function _isupper
 * Return: 1 if true else 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <='Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
