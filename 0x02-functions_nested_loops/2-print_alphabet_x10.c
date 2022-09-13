#include "main.h"
/**
 * print_alphabet_x10 - Prints out the alphabets
 * 10 times, in lowercase, and a new line.
 * 
 * Return: Void on success.
 */
int print_alphabet(void)
{
	char a;
	int count;

	count = 0;
	while (count < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		count ++;
		_putchar('\n');
	}
	return (0);
}
