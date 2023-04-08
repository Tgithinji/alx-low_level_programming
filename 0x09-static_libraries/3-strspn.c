#include "main.h"

/**
 * _strspn - Get the length of a prefix string
 * @s: the string to be scanned
 * @accept: the list of characters to be matched
 *
 * Return: returns the number of bytes in the inititial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes;

	bytes = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bytes++;
				break;
			}
		}
		if (*(accept + j) == '\0')
			break;

	}
	return (bytes);
}
