#include "main.h"

/**
 * _strlen_recursion - find the length of a string using recursion
 * @s: Pointer to the string whose length is to be checked
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
