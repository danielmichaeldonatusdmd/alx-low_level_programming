#include "main.h"

/**
 * _atoi - that ctonvert a string to an integer.
 *
 * @s: the string.
 *
 *Return: no result
 */

int _atoi(char *s)
{
	int x = 1;
	unsigned  int y = 0;

	do {

		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			z = (z * 10 ) + (*s - '0');

		else if (z > 0)
			break;
	} while (*s++);

	return (z * x);
}
