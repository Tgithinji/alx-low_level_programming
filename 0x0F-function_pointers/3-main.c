#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * performs simple operations
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char *op;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	res = get_op_func(op);

	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!(strcmp(op, "/")) || !(strcmp(op, "%"))) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*res)(num1, num2);
	printf("%d\n", result);

	return (0);
}
