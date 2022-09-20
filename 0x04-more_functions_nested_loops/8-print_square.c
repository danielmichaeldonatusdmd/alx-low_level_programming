#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		int m, p;

		for (m = 0; m < size; m++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
