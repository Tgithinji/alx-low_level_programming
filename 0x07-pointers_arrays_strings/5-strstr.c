#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurnce of needle in the string haystack
 * @haystack: string to be scanned
 * @needle: substring to be compared with
 *
 * Return: pointer to the beginning of located string. or NULL if no match
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (*(needle + j) == '\0')
			return (haystack + i);
	}
	return (NULL);
}
