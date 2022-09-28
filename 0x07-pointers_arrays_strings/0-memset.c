#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: the area of memory to be filled
 * @b: the character to fill the area with
 * @n: the value of bytes to fill
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
