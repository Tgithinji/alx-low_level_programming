#include "main.h"

/**
 * print_times_table - prints the times table of a given number
 * @n: The given number
 */
void print_times_table(int n)
{
	int i, j, m, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (j == 0)
				{
					_putchar(m + 48);
					continue;
				}
				_putchar(44);
				_putchar(32);
				if (m < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(m + 48);
				}
				else if (m >= 10 && m < 100)
				{
					_putchar(32);
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				}
				else
				{
					p = m;
					m = m / 10;
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
					_putchar((p % 10) + 48);
				}	
			}
			_putchar('\n');
		}
	}
}
