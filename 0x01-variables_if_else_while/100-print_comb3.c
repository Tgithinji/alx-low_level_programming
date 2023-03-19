#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible different combinations of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i >= j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				putchar('\n');
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
