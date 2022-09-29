#include "main.h"
/**
 * _pow_recursion - Thi function returns the power of x to y.
 * @x: Arg 1.
 * @y: Arg 2.
 *
 * Return: 0 on success.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
        {
		return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
