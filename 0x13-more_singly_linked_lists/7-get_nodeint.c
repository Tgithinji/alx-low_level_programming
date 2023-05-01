#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: ponter to the first node
 * @index: is the index of the node starting at o
 *
 * Return: the nth node or NULL incase of failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	/* loop upto the node at the given index */
	for (i = 0; i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	else
		return (current);
}
