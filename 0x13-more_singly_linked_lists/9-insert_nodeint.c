#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: points to the first node
 * @idx: index where to insert the node
 * @n: data of the new node
 *
 * Return: pointer to new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* Declare pointers to hold current and new node */
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	/* allocate memory and fill newnode with its data */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	/* loop to the position the node should be added */
	if (idx > 0)
	{
		for (i = idx; i != 1; i--)
		{
			current = current->next;
		}
		if (current == NULL)
		{
			return (NULL);
		}
		else
		{
			new_node->next = current->next;
			current->next = new_node;
		}
	}
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
