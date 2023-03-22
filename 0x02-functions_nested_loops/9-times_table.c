#include "main.h"

/**
 * times_table - Prints the nine times table statrting with 0
 *
 * Return - void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(',');
			_putchar(' ');
			if (k < 10)
			{
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
