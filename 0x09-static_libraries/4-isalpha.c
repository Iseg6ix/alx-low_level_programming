#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character.
 * @c: Integer argument.
 *
 * Return: 0 on success.
 */
int _isalpha(int c)
{
	int a = isalpha(c);
	int l = islower(c);
	int u = isupper(c);

	if (a || l || u)
		return (1);
	else
		return (0);
	return (0);
}
