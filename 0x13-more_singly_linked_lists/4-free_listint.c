#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first element
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	/* loop through the list as we free memory */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
