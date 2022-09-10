#include <stdio.h>
/**
 * main- This program prints numbers
 * from 0 to 9.
 * Return: 0 if no errors occurs else +ve integer
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
