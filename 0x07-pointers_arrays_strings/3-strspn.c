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
	unsigned int i, j;
	char acc, str;

	for (i = 0, str = *(s + i); str != '\0'; i++)
	{
		for (j = 0, acc = *(accept + j); acc != '\0'; j++)
		{
			if (acc == str)
				break;
		}
		if (acc == '\0')
			return (i);

	}
	return (i);
}
