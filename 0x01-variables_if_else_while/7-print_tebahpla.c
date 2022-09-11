#include <stdio.h>
/**
 *main- Prints the alphabets from z to a.
 *Return: 0 if no errors occurs, else returns a +ve integer.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
