#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: points to the first node
 * @index: the index of the node to be deleted
 *
 * Return: 1 if success else -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	else if (index > 0)
	{
		while (index > 0 && temp != NULL)
		{
			temp = temp->next;
			index--;
		}
		if (temp == NULL)
		{
			return (-1);
		}
		else
		{
			if (temp != NULL)
				temp2 = temp->prev;
			if (temp2 != NULL)
				temp2->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp2;
			free(temp);
			temp = NULL;
			return (1);
		}

	}
	return (-1);
}
