#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number whose bit is to be set
 * @index: the index at which 1 is to be set
 *
 * Return: 1 (success). -1 (failed)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is out of range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* left shift 1 index times and perform OR operator with n */
	*n = (1 << index) | *n;

	return (1);
}
