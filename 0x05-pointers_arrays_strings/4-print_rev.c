#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int i, j, length;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
