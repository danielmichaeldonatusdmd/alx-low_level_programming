#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *	@nmemb: number of elements in the array
 *	@size: size in bytes of the elements
 * Return: void pointer to allocated memory
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr;
	unsigned int ay;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ay = nmemb * size;

	c = malloc(ay);

	if (c == NULL)
		return (NULL);

	for (arr = 0; arr < ay; arr++)
		c[arr] = 0;

	return (c);
}
