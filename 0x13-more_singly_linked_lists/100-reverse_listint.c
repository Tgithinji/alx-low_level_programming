#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the first element
 *
 * Return: a ponter to the first node of reversed lit
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *current2;

	if (*head == NULL)
		return (NULL);
	/* loop  through until the last element in the list */
	while (*head != NULL)
	{
		/* point to the second node on the list */
		current2 = (*head)->next;
		/* update link part of the first node */
		(*head)->next = current;
		/* update head ponter to point to second node */
		current = *head;
		*head = current2;
	}
	*head = current;
	return (*head);
}
