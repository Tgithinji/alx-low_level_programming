#include "main.h"

/**
 * flip_bits - returns the number of bits that need to be flipped
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits nedded to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count;
	unsigned long int num;

	/* get XOR of both numbers */
	num = n ^ m;
	count = 0;

	/* loop while counting set bits in the XOR output */
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
