#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the base 16 numbers in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 49; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
