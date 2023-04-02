#include "main.h"

/**
 * _strncpy - copies a string a number of bytes to another strin
 * @dest: firt string
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* if loop stopped and did not reach n  continue*/
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
