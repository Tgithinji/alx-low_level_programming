#include "lists.h"

/**
 * print_dlistint - print all elements of a dlistint_t list
 * @h: first node list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;
	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
