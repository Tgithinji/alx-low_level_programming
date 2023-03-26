#include "main.h"
#include <stdio.h>

/**
 * prime_factors - finds and prints the largest prime factor of a number
 * @n: integer whose prime factor is to be checked
 */

void prime_factors(long n)
{
	int m = 2;
	int p;

	while (n != 0)
	{
		if (n % m != 0)
		{
			m++;
		}
		else
		{
			p = n;
			n = n / m;
			if (n == 1)
			{
				printf("%d\n", p);
				break;
			}
		}
	}
}

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	long n = 612852475143;

	prime_factors(n);
	return (0);
}
