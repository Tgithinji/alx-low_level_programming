#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: pointer to pointer to the first element
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return;

	/* loop to the end as we free memory one by one */
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	/* set head to NULL*/
	*head = NULL;
}
