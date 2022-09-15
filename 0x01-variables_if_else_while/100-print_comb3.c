#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 * of two digits.
 * Return: 0 Always (successful)
 */

int main(void)
{
	int P, M;

	for (P = 28; P <= 36; P++)
	{
		for (M = 29; M <= 37; M++)
		{
			if (M > P)
			{
				putchar(P);
				putchar(M);
				if (P != 36 || M != 37)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
