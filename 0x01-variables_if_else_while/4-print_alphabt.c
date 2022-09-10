#include <stdio.h>
/**
 * main- Prints the program in lowercase
 * followed by a new line
 * Return: 0 when no errors occured,
 * otherwise returns a positive integer
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
			putchar(a);
	putchar('\n');
	return (0);
}
