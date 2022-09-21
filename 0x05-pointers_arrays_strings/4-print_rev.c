#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @srp: string to be printed
 *
 * Return: 0
 */

void print_rev(char *srp)
{
	int dr = 0;

	while (srp[dr])
		dr++;
	while (dr--)
		_putchar(srp[dr]);
	_putchar('\n');
}
