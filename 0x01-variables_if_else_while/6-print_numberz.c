#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- This program prints numbers of base 10 from 0,
 * only using putchar function and no char variables.
 * Return: 0 if no errors occurs else +ve integer
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
