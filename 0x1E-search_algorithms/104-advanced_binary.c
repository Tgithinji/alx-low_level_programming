#include "search_algos.h"

int first_occurrence(int *array, size_t start, size_t end, int value);
/**
 * advanced_binary - searches for the first occurrence
 * of a value in a sorted array
 * @array: pointer to the sorted array
 * @size: num ber of elements in the array
 * @value: value to be searched for
 *
 * Return: index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;

	return (first_occurrence(array, start, end, value));
}

/**
 * first_occurrence - find first occurence of a value
 * @array: pointer to an array
 * @start: index to the first element
 * @end: last index
 * @value: value to be searched for
 *
 * Return: index of the first value else -1
 */
int first_occurrence(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (start > end)
		return (-1);

	mid = start + (end - start) / 2;

	printf("Searching in array:");
	for (i = start; i < end; i++)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[i]);

	if (array[mid] == value)
	{
		/* if this is first occurrence */
		if (mid == 0 || array[mid - 1] < value)
			return (mid);
		else
			return (first_occurrence(array, start, mid - 1, value));
	}
	else if (array[mid] > value)
	{
		return (first_occurrence(array, start, mid - 1, value));
	}
	else
	{
		return (first_occurrence(array, mid + 1, end, value));
	}
}
