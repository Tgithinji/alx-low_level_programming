#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linke list
 * @h: pointer to the linked list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	/* initialize a variable to keep track of number of elements */
	size_t count;

	count = 0;
	/* loop through each element keeping count */
	while (h != NULL)
	{
		count++;
		/* jump to the next element */
		h = h->next;
	}
	return (count);
}
