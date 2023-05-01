#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: points to the first element
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* declare a counter variable */
	size_t count;

	/* loop through each node and print its content*/
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
