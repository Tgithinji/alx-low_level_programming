#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: Get the last digit of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastN = n % 10;

	if (lastN > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastN);
	else if (lastN < 6 && lastN != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
	else
		printf("Last digit of %d is %d and is 0\n", n, lastN);
	return (0);
}
