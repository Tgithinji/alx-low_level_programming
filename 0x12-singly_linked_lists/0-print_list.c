#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	/* loop through each node and print its content */
	for (count = 0; h != NULL; count++)
	{
		/* check if string is NULL */
		if (h->str == NULL)
		{
			printf("[%d] (%s)\n", 0, "nil");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
