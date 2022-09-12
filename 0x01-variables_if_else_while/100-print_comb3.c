#include <stdio.h>
/**
 * main- This program prints out all possible
 * combinations of 2 unidentical numbers.
 * Return: 0 if no errors occurs else a +ve integer.
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9';)
	{
		for (b = '1'; b <= '9';)
			if (a != b && b > a)

			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
				a++;
				b++;
			};
	};
	putchar('\n');
	return (0);
}
