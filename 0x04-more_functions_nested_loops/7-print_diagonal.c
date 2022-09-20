#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int M, P, D;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (M = 0; n > M; M++)
		{
			D = M - 1;

			for (p = 0; D >= P; P++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
