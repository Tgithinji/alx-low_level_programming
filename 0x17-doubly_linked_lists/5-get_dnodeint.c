#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: points to the first node
 * @index: the index of the node to be returned
 *
 * Return: node at index n
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head != NULL)
	{
		if (idx == index)
		{
			return (head);
		}
		idx++;
		head = head->next;
	}
	return (NULL);
}
