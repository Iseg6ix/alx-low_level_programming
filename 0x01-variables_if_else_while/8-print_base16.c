#include <stdio.h>
/**
 * main- This program prints all the numbers of base 16 in lowercase.
 * Return: 0 if no errors.
 */
int main(void)
{
	int c;

	for (c = 0; c < 16; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
