#include "main.h"

int sqroot(int n, int k);

/**
 * _sqrt_recursion - Returns the nutural square root of a number
 * @n: The number whose root is to be checked
 *
 * Return: -1 if no squareroot. else return square root
 */
int _sqrt_recursion(int n)
{
	int m;

	m = sqroot(n, 1);
	return (m);
}

/**
 * sqroot - Finds and returns the square root using recursion
 * @n: Number whose squareroot is being calculated
 * @k: Variable to hold the squareroot
 *
 * Return: Square if any or -1 if else
 */
int sqroot(int n, int k)
{
	if (k * k > n)
		return (-1);
	else if (k * k != n)
		return (sqroot(n, k + 1));
	else
		return (k);
}
