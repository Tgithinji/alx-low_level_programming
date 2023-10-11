#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array
 * using interpolation search algorithm
 * @array: pointer to a sorted array
 * @size: number of elements in array
 * @value: element to search for
 *
 * Return: the index of element or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));

		if (pos > high)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
