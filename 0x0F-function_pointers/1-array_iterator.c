#include "function_pointers.h"
/**
 * array_iterator - executes a function given as parameter
 * on each array element
 * @array: the array
 * @size: the size of the array
 * @action: pointer to a funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
