#include "main.h"

/**
 * print_alphabet - print the alphabet inlowercase folllowed by a new line
 *
 * Return : void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

