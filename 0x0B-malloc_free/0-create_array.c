#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initialize it with a char
 * @size: number of memory needed
 * @c: the char to be initialized with
 *
 *Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
