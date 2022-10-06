#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that takes first two integer arguments and prints the product
 *	@argc: Number of command line arguments
 *	@argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char **argv)
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);
}
