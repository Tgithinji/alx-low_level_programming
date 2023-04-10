#include <stdio.h>

/**
 * main - prints all command line arguments
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
