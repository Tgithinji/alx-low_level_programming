#include "search_algos.h"

int binary_search_a(int *array, size_t start, size_t size, int value);
/**
 * exponential_search - search for a value in a sorted
 * using exponential search algorithm
 * @array: pointer to a sorted array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, min;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	min = (i < size - 1) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min);
	return (binary_search_a(array, i / 2, min, value));
}

/**
 * binary_search_a - uses binary search to search for a
 * value in a sorted array
 * @array: sorted array
 * @start: start searching at index
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or -1 if value not found
 */
int binary_search_a(int *array, size_t start, size_t size, int value)
{
	size_t end, mid, i;

	if (array == NULL)
		return (-1);

	end = size;

	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in array:");
		for (i = start; i < end; i++)
		{
			printf(" %d,", *(array + i));
		}
		printf(" %d\n", *(array + end));

		if (*(array + mid) > value)
			end = mid - 1;
		else if (*(array + mid) < value)
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
