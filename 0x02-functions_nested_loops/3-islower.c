#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: The letter to be checked
 *
 * Return: 1 if c is lowercase. 0 if oterwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
