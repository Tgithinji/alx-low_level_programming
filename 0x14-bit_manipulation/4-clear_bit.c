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
	/* left shift 1 upto index positon */

	*n = *n & (~(1 << index));

	return (1);

}
