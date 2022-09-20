#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character should be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	putchar('\n');
}