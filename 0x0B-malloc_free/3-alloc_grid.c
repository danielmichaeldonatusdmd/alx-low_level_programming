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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	arr = (int **) malloc(len);
	if (arr == NULL)
		return (NULL);

	ptr = (int *)(arr + height);

	for (i = 0; i < height; i++)
	{
		arr[i] = (ptr + width * i);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

	else
	{
		return (NULL);
	}

}
