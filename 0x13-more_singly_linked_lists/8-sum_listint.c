#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in alinked list
 * @head: pointer to the first element
 *
 * Return: sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);

	/* loop through the elements adding each data to get the sum */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
