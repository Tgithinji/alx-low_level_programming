#include "lists.h"

/**
 * sum_dlistint - get the sum of all the data in alinked list
 * @head: points to the first element
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
