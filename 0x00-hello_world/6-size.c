#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various data types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float));
	return (0);
}
