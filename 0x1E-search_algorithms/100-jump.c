#include "search_algos.h"
#include <math.h>

/**
 * jump_search - use jump search to search for a value
 * in a sorted array
 * @array: pointer to a sorted array
 * @size: number of elements in an array
 * @value: value of element to search for
 *
 * Return: the index of value or -1 if value not exists
 */
int jump_search(int *array, size_t size, int value)
{
	size_t skip = sqrt(size), i, index = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += skip)
	{
		if (*(array + i) < value)
			index = i;
		else
			break;

		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
	}

	printf("Value found between indexes [%ld] and [%ld]\n", index, index + skip);

	for (i = index; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
	}
	return (-1);
}
