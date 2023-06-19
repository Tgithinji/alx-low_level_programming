#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, sign, num;

	sign = 1;
	num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - 48);
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}

	return (num);
}
