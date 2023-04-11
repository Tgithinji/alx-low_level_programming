#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a duplicate of the given sting
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated string. NULL if there is an error
 */
char *_strdup(char *str)
{
	char *strcp;
	int len, i;

	len = strlen(str);
	if (str == NULL)
		return (NULL);
	strcp = malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
		strcp[i] = str[i];
	}
	return (strcp);
}
