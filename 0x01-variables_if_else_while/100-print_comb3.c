#include <stdio.h>

/**
 * main - program that prints all possible different combinations
 * of two digits.
 * Return: 0 Always (successful)
 */

int main(void)
{
	int P, M;

	for (P = '0'; P <= '9'; P++)
	{
		for (M = '1'; M <= '10'; M++)
		{
			if (M > P)
			{
				putchar(P);
				putchar(M);
				if (P != '9' || M != '10')
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
