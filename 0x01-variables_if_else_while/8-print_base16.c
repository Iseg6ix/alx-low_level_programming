#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- This program prints all the numbers of base 16 in lowercase.
 * Return: 0 if no errors.
 */
int main(void)
{
	int d;

	for (d = 0; d < 16; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
