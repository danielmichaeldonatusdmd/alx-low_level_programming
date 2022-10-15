#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *	@size: Size of the array
 *	@c: Character to insert
 * Return: NULL if size is zero or if it fails,
 * pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int Uint;

	if (size == 0)
		return (NULL);
	array = (char *) malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (Uint = 0; Uint < size; Uint++)
	{
		array[Uint] = c;
	}
	return (array);
}
