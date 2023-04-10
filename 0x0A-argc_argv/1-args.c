#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 Always
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
