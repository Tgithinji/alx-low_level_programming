#include "main.h"

/**
 * _puts - prints a given string from a pointer
 * @str: pointer to the string that is to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
