#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combination of three digits
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i == j || j == k || i > j || i == k || i > k || j > k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					putchar('\n');
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	return (0);
}
