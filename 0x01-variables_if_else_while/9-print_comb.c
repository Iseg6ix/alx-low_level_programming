#include <stdio.h>
/**
 * main- This program prints all possible combinations of single digit numbers; i.e 
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
 * Return: 0 if no errors encoutered. else returns a +ve integer.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
