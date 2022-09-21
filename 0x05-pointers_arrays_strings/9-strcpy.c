#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * 		@dest: string
 *		 @src: string char
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do
	{
		n++;
		dest[n] = src[n];
	}
	while (src[n] != '\0);

	return (dest);
}
