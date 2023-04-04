#include "main.h"
#include <string.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing character to match
 *
 * Return: Pointer to character in s that match a charcter in accept. else Null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag;

	flag = 0;
	for (i = 0; *(s + i) != '\0'; i++)	
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag)
			break;
	}
	if (*(s + i) == '\0')
		return (NULL);
	else
		return (s + i);
}
