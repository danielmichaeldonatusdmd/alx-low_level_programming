#include "main.h"



/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: times tabl
 */

void times_table(void)
{

	int X, Y, Z;

	for (X = 0; X <= 9; ++X)
	{
		_putchar(48);

		for (Y = 1; Y <= 9; ++Y)
		{
			_putchar(',');
			_putchar(' ');

			Z = X * Y;

			if (Z <= 9)
			{
				_putchar(' ');
			}
			else
				_putchar((Z / 10) + 48);

			_putchar((Z % 10) + 48);
		}
		_putchar('\n');
	}
}
