#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - Prints the last digit of an integer
 * @y: The integer which gives us the last digit
 *
 * Return: The value of the last digit
 */
int print_last_digit(int y)
{
	int x = y % 10;

	if (y < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
