#include "main.h"
/**
 * _isupper - This function checks for uppercase character
 *@c: Int argument
 *
 * Return: 0 on success.
 */
int _isupper(int c)
{
	char a;
	for (a = 'A'; a <= 'Z';)
	{
		if (c == a)
			return (1);
		else
			return (0);
	}
	return (0);
}
