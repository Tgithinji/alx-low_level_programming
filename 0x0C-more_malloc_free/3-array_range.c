#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: lowest value to add to array
 * @max: highest value to be added to array
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *num, len, i;

	if (min > max)
		return (NULL);
	len = (max - min) + 1;
	num = malloc(sizeof(int) * len);
	if (num == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		num[i] = min;
		min++;
	}
	return (num);
}
