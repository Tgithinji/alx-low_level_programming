#include "search_algos.h"

/**
 * binary_search - uses binary search to search for a
 * value in a sorted array
 * @array: sorted array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or -1 if value not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = start + (end - start) / 2;

		printf("Searching in arry: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", *(array + i));
		}
		printf("%d\n", *(array + end));

		if (*(array + mid) > value)
			end = mid - 1;
		else if (*(array + mid) < value)
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
