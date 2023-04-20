#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed as arguments
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *seperator, unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i, num;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg_list, int);
		printf("%d", num);
		if (i + 1 == n)
			break;
		if (seperator != NULL)
			printf("%s", seperator);
		else
			printf(" ");
	}
	putchar('\n');
}
