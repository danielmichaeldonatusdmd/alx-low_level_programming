#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *	@dest: append string
 *	@src: The string to be appended to dest
 *	@n: n for number of bytes from src to be appended to dest
 * Return: pointer to string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c = 0, j = 0;

	for (i = 0; dest[i] != 0; i++)
		c++;
	for (i = c; src[j] != 0 && j < n; i++)
	{
		if (i == 98)
			break;
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
