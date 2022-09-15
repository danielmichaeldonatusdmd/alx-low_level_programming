#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 * of two digits.
 * Return: 0 Always (successful)
 */

int main(void)
{
	int P, M;

	for (P = 48; P <= 56; P++)
	{
		for (M = 49; M <= 57; M++)
		{
			if (M > P)
			{
				putchar(P);
				putchar(M);
				if (P != 56 || M != 57)
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
