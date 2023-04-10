#include <stdio.h>
#include <stdlib.h>

int count_cents(int n);
/**
 * main - entry point
 * @argc: argument count
 * @argv: Array of arguments
 *
 * Return: 0 (success) or 1 if there is a failure
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	n = count_cents(atoi(argv[1]));
	printf("%d\n", n);
	return (0);
}

/**
 * count_cents - print the minimum number of coins to make change
 * @n: amount of cents
 *
 * Return: amount of coins
 */

int count_cents(int n)
{
	if (n == 0)
		return (0);
	if (n >= 25)
		return (1 + count_cents(n - 25));
	else if (n >= 10 && n < 25)
		return (1 + count_cents(n - 10));
	else if (n >= 5 && n < 10)
		return (1 + count_cents(n - 5));
	else if (n >= 2 && n < 5)
		return (1 + count_cents(n - 2));
	else
		return (1 + count_cents(n - 1));
}
