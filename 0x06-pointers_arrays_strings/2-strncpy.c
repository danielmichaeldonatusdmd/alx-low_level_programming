#include "main.h"

/**
 * _strncpy - unction that copies strings.
 * @dest: the pointer to the destination string
 * @src: the pointer to the source string
 * @n: number of bytes from src to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
