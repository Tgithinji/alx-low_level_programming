#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to power y
 * @x: The number to be raised by y
 * @y: The power to be raised by
 *
 * Return: Return the value of x to power y or 0 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
