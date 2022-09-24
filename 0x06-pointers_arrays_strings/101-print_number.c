#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: integer to be printed.
 * Return: 0
 */



void print_number(int n)
{
	unsigned int main = n;

	if (n < 0)
	{
		_putchar('-');
		main = -n;
	}

	if ((main / 10) > 0)
		print_number(main / 10);

	_putchar((main % 10) + '0');
}
