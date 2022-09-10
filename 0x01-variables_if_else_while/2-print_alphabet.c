#include <stdio.h>
/**
 * main - Prints out the alphabets in lowercase
 * Return: 0 if no errors encoutered,
 * else a positive integer is returned.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
