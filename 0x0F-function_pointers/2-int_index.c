#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array with integers
 * @size: number of elements in the array
 * @cmp: a pointer to a function
 *
 * Return: Index of first element wher cmp is not 0. and - 1 inase of error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
