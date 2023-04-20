#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings from its arguments
 * @seperator: string to be printed between strings
 * @n: number of strings passed to the functrion
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
		if (i + 1 == n)
			break;

		if (seperator != NULL)
			printf("%s", seperator);
		else
			printf(" ");
	}
	va_end(arg_list);
	putchar('\n');
}
