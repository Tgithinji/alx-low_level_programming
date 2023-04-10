#include <stdio.h>

int _atoi(char *s);
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
		mult = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, sign, num;

	i = 0;
	sign = 1;
	num = 0;
	if (*s == '-')
	{
		sign = -1;
		i++;
	}

	for (; *(s + i) != '\0'; i++)
	{
		num = num * 10 + (*(s + i) - 48);
	}
	num *= sign;
	return (num);
}
