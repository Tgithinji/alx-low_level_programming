#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the first node
 * @str: data to be added to thae new list
 *
 * Return: address of the new element or NULL incase of failure
 */
list_t *add_node(list_t **head, const char *str)
{
	/* Declare a pointer variable that will points to a node */
	list_t *new_ptr;

	/* allocate memory to new pointer */
	new_ptr = malloc(sizeof(list_t));
	if (new_ptr == NULL)
		return (NULL);

	/* fill the new node with data */
	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = NULL;

	/* insert the first node to the new node */
	new_ptr->next = *head;
	/* assign the head pointer to the first node */
	*head = new_ptr;

	return (new_ptr);
}
