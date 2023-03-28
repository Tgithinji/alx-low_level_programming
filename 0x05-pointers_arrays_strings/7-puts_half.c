#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the strings whose half should be printed
 */

void puts_half(char *str)
{
	int i, n, length;

	length = 0;
	for (i = 0; str[i] != 0; i++)
	{
		length++;
	}
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;
	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
