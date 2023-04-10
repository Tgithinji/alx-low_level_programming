#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (Success). 1 to show error
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}
