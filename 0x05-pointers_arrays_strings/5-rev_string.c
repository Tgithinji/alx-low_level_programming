#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j, k, length;
	char l;

	k = 0;
	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (j = length - 1; j >= length / 2; j--)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		k++;
	}
}
