#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *	@min: the minimum integer
 *	@max: the maximum integer
 * Return: returns a pointer to the newly created array
 */


int *array_range(int min, int max)
{
	int x;
	int y;
	int *arr;

	if (min > max)
		return (NULL);


	y = max - min + 1;
	arr = malloc(sizeof(int) * y);

	if (arr == NULL)
		return (NULL);
	for (x = 0; x < y; x++, min++)
	{
		a[x] = min;
	}
	return (arr);
}
