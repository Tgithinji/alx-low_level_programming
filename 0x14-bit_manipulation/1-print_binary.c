#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, num;

	for (i = 32; i >= 0; i--)
	{
		/* shift all bits rightwards to right most end */
		num = n >> i;

		/* check is num was 0 or 1 */
		if (num & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
