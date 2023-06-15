#include "lists.h"

/**
 * add_dnodeint - Function adds a new node at the beginning
 * @head: First node
 * @n: data to be filled in new node
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_add;

	new_add = malloc(sizeof(dlistint_t));
	if (new_add == NULL)
	{
		return (NULL);
	}

	new_add->n = n;
	new_add->prev = NULL;
	new_add->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_add;
	}
	*head = new_add;

	return (new_add);
}

