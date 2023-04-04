#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 * @s: the pointer
 * @to: the char that the pointer should be set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
