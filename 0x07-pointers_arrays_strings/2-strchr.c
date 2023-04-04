#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string
 * @c: the character to be located
 *
 * Return: pointer to c if c is found else returns NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			break;
	}
	if (*(s + i)  == '\0')
		return (NULL);
	else
		return (s + i);
}
