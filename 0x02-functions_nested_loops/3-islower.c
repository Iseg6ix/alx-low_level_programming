#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower case character.
 * parameter c - Takes in an integer as it's arguments.
 * Return: 1 if is a lowercase value, 0 otherwise.
 */
int _islower(int c)
{
	int _islower = islower(c);

	if (_islower)
		return (1);
	else
		return (0);
	return (0);
}
