#include"main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @s: string to print
 *
 * Return: Nil
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s + 0);
		++s;
	}
	_putchar('\n');
}
