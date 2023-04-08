#include <stdio.h>

/**
 * main - prints all possible combinations of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (i == j && j ==k && k == l)
						continue;
					if (j > k || j > l || i > k)
						continue;
					if (i == k && j ==l)
						continue;
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == '9' && j =='8' && k == '9' && l == '9')
					{
						putchar('\n');
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	return (0);
}
