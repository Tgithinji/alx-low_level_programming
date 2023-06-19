#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of a number
 * @y: integer to be computed
 *
 * Return: Returns the absolute value of integer
 */
int _abs(int y)
{
	if (y < 0)
		return (y * -1);
	else
		return (y);
}

