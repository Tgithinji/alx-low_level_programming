#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of parameters or 0 if no parameter is passed
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int sum, i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
