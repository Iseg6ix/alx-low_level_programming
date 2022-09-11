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
		i = i % 10;
		putchar(i);
	putchar('\n');
	return (0);
}
