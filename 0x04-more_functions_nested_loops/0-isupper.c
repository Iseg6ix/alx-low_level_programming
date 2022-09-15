#include "main.h"
/**
 * _isupper - This function checks for uppercase character
 *@c: Int argument
 *
 * Return: 1 on success.
 */
int _isupper(int c)
{
	for (c = 'A'; c < 'Z';)
	{
		if (c)
			return (1);
		else
			return (0);
	}
	return (0);
}
