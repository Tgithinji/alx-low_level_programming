#include "main.h"

/**
 * _strcmp - compare two srings
 * @s1: string one
 * @s2: string two
 *
 * Return: less than 0 if s1 < s2, 0 if same and more than 0 if otherwise
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++
	}
	return (*s1 - *s2);
}
