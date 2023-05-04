#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	while (n)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		/* right shift by one */
		n = n >> 1;
	}
}
