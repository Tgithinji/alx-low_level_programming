#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit seperated by a comma and white space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('\n');
			break;
		}
		putchar(44);
		putchar(32);
	}
	return (0);
}
