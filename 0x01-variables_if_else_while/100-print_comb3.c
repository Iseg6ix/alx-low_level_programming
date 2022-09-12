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
<<<<<<< HEAD
		for (b = '1'; b <= '9';)
			if (a != b && b > a)
=======
		for (b = '1'; b <= '9'; b++)
			if (a != '9' && a != b && b > a)
>>>>>>> 45622b5bb3d400b6e70fb6d173c3943440ef7bad

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
