#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @header: pointer to first node
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
