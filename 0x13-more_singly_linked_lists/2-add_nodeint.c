#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node at the beginning of the list
 * @head: points to a pointer to the first node
 * @n: data to be added to the new node
 *
 * Return: pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Declare a new pointer */
	listint_t *ptr_node;

	/* alllocate enough memory to the pointer */
	ptr_node = malloc(sizeof(listint_t));
	if (ptr_node == NULL)
	{
		return (NULL);
	}

	/* add necessary data to the new node */
	ptr_node->n = n;
	ptr_node->next = NULL;

	/* point the new node to the first node */
	ptr_node->next = *head;

	/* update the head pointer to point to the new node */
	*head = ptr_node;

	return (ptr_node);
}
