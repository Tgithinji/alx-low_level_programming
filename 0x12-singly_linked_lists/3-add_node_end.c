#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add anew node at the end of a list_t
 * @head: pointer to the first node
 * @str: am a strinh'
 *
 * Return: address of a new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ptr;
	list_t *temp_ptr;

	if (head == NULL)
		return (NULL);

	new_ptr = malloc(sizeof(list_t));
	if (new_ptr == NULL)
		return (NULL);

	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = NULL;

	temp_ptr = *head;
	/* loop through the elements until the last one */
	if (*head == NULL)
	{
		*head = new_ptr;
	}
	else
	{
		while (temp_ptr->next != NULL)
		{
			temp_ptr = temp_ptr->next;
		}
		temp_ptr->next = new_ptr;
	}
	return (new_ptr);
}
