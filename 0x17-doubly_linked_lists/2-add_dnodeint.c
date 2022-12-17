#include "lists.h"

dlistint_t *add_dnode(dlistint_t **head, const int n)
{
	dlistint_t *n;
	n = malloc(sizeof(dlistint_));
	if (

	head->prev = n;
	n->next = head;
	n->prev = NULL
	return (n);
}
