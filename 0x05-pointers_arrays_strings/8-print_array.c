
#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line.
 *
 *           @s: element paramiter
 *           @n: string parameter
 * Return: 0 always
 */

void print_array(int *s, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
			printf("%d, ", s[i]);
		else
			printf("%d", s[i]);
	}
	printf("\n");
}
