#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: pointer to the concatenated string or NULL incase of failure
 */
char *str_concat(char *s1, char *s2)
{
	char *strct;
	int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	strct = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (strct == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		strct[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		strct[i] = s2[j];
		i++;
	}

	return (strct);
}
