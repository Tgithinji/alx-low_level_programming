#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first element of linked list
 * @head: points to a pointer that points to the list
 *
 * Return: head nodes data (n) or 0 if empty
 */
int pop_listint(listint_t **head)
{
	/* declare a temporary pointer*/
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	/* assign the first element to temp */
	temp = *head;
	/* make the head pointer to point to the second element */
	*head = (*head)->next;
	n = temp->n;
	/* Delete the tmp node and assign it to NULL */
	free(temp);
	temp = NULL;

	return (n);
}
