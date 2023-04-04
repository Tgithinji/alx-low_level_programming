#include "main.h"

/**
 * _memcpy - copies n bytes from memory area to another memory area
 * @dest: pointer to where content is to be copied
 * @src: pointer to the data to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
