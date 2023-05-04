#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Function that converts a binary number to unsigned int
 * @b: points to a string og '0' ang '1'
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j, num, dec_num;

	if (b == NULL)
		return (0);

	dec_num = 0;

	for (j = 0; *(b + j) != '\0'; j++)
	{
		num = *(b + j) - '0';
		if (num == 1 || num == 0)
		{
			dec_num = (dec_num << 1) | num;
		}
		else
		{
			return (0);
		}
	}
	return (dec_num);
}
