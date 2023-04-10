#include <stdio.h>

int _atoi(char *s);
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 (success). 1 if not a number
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!_atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * _atoi - convert string to integer
 * @s: the string to be converted
 *
 * Return: integer or 0 if s is not a number
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
		if (*(s + i) < 48 || *(s + i) > 57)
			return (0);
		num = num * 10 + (*(s + i) - 48);
	}
	num *= sign;
	return (num);
}
