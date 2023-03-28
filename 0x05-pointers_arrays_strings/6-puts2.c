#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string whose characters are to be printed
 */

void puts2(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
