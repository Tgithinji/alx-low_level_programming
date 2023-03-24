#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints 0 - 100 checking multiples of 3 and 5
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
}

/**
 * main - calls fizz_buzz function
 * Return: 0 Always
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
