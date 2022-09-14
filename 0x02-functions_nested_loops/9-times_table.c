#include "main.h"
/**
 * times_table - multiplication table to 9
 *
 * Return: 0
 */
void times_table(void)
{
	int num, mul, ans;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			ans = num * mul;
			if (ans <= 9)
				_putchar(' ');
			else
				_putchar((ans / 10) + '0');
			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
