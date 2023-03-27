#include "main.h"

/**
 * _strlen - returns the length of a sting;
 * @s: string whose character length is to be returned
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
