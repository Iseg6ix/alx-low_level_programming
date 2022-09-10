#include <stdio.h>
/**
 * main- This program prints numbers of base 10 from 0,
 * only using putchar function and no char variables.
 * Return: 0 if no errors occurs else +ve integer
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + 0);
	putchar('\n');
	return (0);
}
