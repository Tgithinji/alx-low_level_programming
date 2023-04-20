#include "calc.h"

/**
 * op_add - gets sum of integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts to integers to get thier difference
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result after dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Gets the remainder of diving two integers
 * @a: integer 1
 * @b: integer two
 *
 * Return: remainder of a / b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
