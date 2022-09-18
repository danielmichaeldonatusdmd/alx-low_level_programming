#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: times table number
 */
void print_times_table(int n)
{
	int X, Y, Z;

	if (n >= 0 && n <= 15)
	{
		for (X = 0; n >= X; X++)
		{
			for (Y = 0; n >= Y; Y++)
			{
				Z = Y * X;
				if (Y == 0)
				{
					_putchar(Z + '0');
				} else if (Z < 10 && Y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(Z + '0');
				} else if (Z >= 10 && Z < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((Z / 10) + '0');
					_putchar((Z % 10) + '0');
				} else if (Z >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((Z / 100) + '0');
					_putchar(((Z / 10) % 10) + '0');
					_putchar((Z % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

