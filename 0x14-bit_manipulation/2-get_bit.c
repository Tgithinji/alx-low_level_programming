#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index of the bit you want
 * @n: an integer
 *
 * Return: the value of the bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* right shift a number of given times */
	n = n >> index;

	/* perform a bitwise AND with 1 */
	n = n & 1;

	return (n);
}
