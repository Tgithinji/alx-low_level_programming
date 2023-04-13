#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all command line arguments
 * @ac: argument count
 * @av: pointer to pointer of array of arguments
 *
 * Return: pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *strct, *s;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len = len + strlen(av[i]) + 1;
	}
	strct = malloc(sizeof(char) * len + 1);
	if (strct == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		len = strlen(s);
		for (j = 0; j < len; j++)
		{
			strct[k] = s[j];
			k++;
		}
		strct[k] = '\n';
		k++;
	}
	return (strct);
}
