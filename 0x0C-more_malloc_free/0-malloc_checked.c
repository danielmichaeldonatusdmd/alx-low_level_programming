#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *	@b: an int that is the size of the memory we want allocated
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *allocate = malloc(b);


	if (allocate == NULL)
	exit(98);


	return (allocate);
}
