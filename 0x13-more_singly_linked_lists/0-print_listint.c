#include "main.h"
/**
 * print_listint - Function to printn out the values and number of nodes
 * @listint_h *h - point to the structure
 *
 * Return - number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *p = listint_t *h;

	while (*p != NULL)
	{
		printf("%d", list_int *p -> n);
		listint_t *p = listint_t *next;
		count ++;
	}
	return count;
}
