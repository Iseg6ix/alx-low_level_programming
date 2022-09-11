#include <stdio.h>
/**
 * main- This program prints all the numbers of base 16 in lowercase.
 * Return: 0 if no errors.
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
