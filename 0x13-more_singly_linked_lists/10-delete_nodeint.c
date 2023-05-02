#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: double pointer to the first element
 * @index: index of the node to be deleted
 *
 * Return: 1 (success). -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* pointer to the node to be deleted */
	listint_t *current;
	/* pointer to the node before the deleted one */
	listint_t *prev;
	unsigned int i;

	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		/* point to the second node and delete the first node */
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		/* loop until current points to the indexed node */
		for (i = index; i != 0; i--)
		{
			prev = current;
			current = current->next;
		}
		/* previous node to point to the node after the deleted one */
		prev->next = current->next;
		/* delete the current indexed node */
		free(current);
		current = NULL;
	}
	return (1);
}
