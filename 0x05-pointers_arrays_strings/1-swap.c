#include "main.h"
/**
 * swap_int - This function swaps the values of two integers.
 * @a: Pointer argument a.
 * @b: Pointer argument b.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
