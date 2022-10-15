#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *	@width: width of the array.
 *	@height: height of the array.
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int len = 0;
	int *ptr;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	array = (int **) malloc(len);
	if (array == NULL)
		return (NULL);

	ptr = (int *)(array + height);

	for (i = 0; i < height; i++)
	{
		array[i] = (ptr + width * i);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
