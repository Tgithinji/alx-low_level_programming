#include "main.h"

/**
 * clear_bit - sets the value of abit to 0 at a given index
 * @index: the given index
 * @n: points to the number whose digit is to be changed
 *
 * Return: 1(Success -1(Failed)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is greater than or equal to number of bits */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* clear the bit at the specified index */
	*n = *n & (~(1 << index));

	return (1);

}
