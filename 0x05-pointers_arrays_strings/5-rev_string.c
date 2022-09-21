#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int m, i;
	char c;

	for (m = 0; s[m] != '\0'; ++m)
	;

	for (i = 0; i < m / 2; ++i)
	{
		c = s[i];
		s[i] = s[m - 1 - i];
		s[m - 1 - i] = c;
	}
}
