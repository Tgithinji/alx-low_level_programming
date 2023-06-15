#include "lists.h"

/**
 * dlistint_len - counts the number of elements in alinked list
 * @h: the first element
 *
 * Return: size of the node list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
