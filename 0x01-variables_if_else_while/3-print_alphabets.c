#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print out the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}

