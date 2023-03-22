#include "main.h"
#include <stdio.h>

/**
 * main - run code
 *
 * Return: always (0)
 */
int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar('0' + r);
    r = print_last_digit(0);
    _putchar('0' + r);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
