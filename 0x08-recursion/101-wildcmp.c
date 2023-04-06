#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 *
 * Return: 1 if strings are equal. 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		else
			return (wildcmp(s1, s2 + 1));
	}

	if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
