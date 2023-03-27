#include "main.h"

/**
 * swap_int - takes two pointers and swap their value
 * @a: the first pointer
 * @b: the second pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
