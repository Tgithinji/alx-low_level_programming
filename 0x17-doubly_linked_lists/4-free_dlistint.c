#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: pointer to the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
