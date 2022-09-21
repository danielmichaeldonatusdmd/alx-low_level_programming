#include "main.h"

/**
 * _strlen - returb the length of the string
 *
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int lent = 0;

	while (s[lent])
		lent++;
	return (lent);
}
