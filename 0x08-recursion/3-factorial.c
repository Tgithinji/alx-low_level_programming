#include "main.h"

/**
 * factorial - Get the factorial of a given number
 * @n: The number
 *
 * Return: Factorial of number. 0 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
