#include"main.h"

/**
 * puts2 - prints every character of a string
 *
 * @s: string input
 *
 * Return: 0
 */

void puts2(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; ++t)
	{
		if (t % 2 == 0)
			_putchar(s[t]);
	}
	_putchar('\n');
}
