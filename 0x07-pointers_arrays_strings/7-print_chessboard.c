#include "main.h"

/**
 * print_chessboard - prints a multidimention array
 * @a: pointer to number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == (8 - 1))
				_putchar('\n');
		}
	}
}
