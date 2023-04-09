#include <stdio.h>

void print_multiples(int n);

/**
 * main - Entry point
 *
 * Return: 0 Alwats
 */
int main(void)
{
	int n;

	n = 1024;
	print_multiples(n);
	return (0);
}

/**
 * print_multiples - Print sum of multiples of 3 or 5
 * @n: an integer
 */
void print_multiples(int n)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
