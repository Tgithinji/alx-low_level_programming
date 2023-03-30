#include "main.h"

/**
 * _strncat - concatenate a given number of characters to a string
 * @dest: first string
 * @src: second string
 * @n: number of characters to be concatenated
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
