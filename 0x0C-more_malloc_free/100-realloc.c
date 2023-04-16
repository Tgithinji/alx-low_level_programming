#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: a pointer to the momory orevously allocated
 * @old_size: the size of the allocated space for ptr
 * @new_size: size of the new momory block
 *
 * Return: pointer to new memory or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (NULL);
	memcpy(ptr2, ptr, old_size);
	free(ptr);

	return (ptr2);
}
