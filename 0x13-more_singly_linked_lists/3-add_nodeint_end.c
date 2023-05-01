#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: a pointer that points to the start of the list
 * @n: data that the new node contains
 *
 * Return: pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* Declare a pointer to a node element */
	listint_t *ptr_node;
	listint_t *temp_ptr;

	/* allocate memory for the node */
	ptr_node = malloc(sizeof(listint_t));
	if (ptr_node == NULL)
	{
		return (NULL);
	}

	/* add the data to the new node */
	ptr_node->n = n;
	ptr_node->next = NULL;
	temp_ptr = *head;

	/* loop to the last element */
	if (*head != NULL)
	{
		while (temp_ptr->next != NULL)
		{
			temp_ptr = temp_ptr->next;
		}
		/* link the last element to the new element */
		temp_ptr->next = ptr_node;
	}
	else
	{
		*head = ptr_node;
	}

	return (ptr_node);
}
