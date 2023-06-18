#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the first node element
 * @idx: the index of the list wher new node should be added
 * @n: data to be stored in the node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp, *temp2;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	temp = *h;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		while (idx != 0 && temp != NULL)
		{
			temp = temp->next;
			idx--;
		}
		if (idx > 0)
		{
			return (NULL);
		}
		if (temp != NULL)
		{
			temp2 = temp->next;
			temp->next = new_node;
			temp2->prev = new_node;
			new_node->prev = temp;
			new_node->next = temp2;
		}
		else
		{
			return (NULL);
		}
	}
	return (new_node);
}
