#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments passed into main
 *	@argc: Number of command line arguments
 *	@argv: Array name
 * Return: 0
 */

int main(int argc, char **argv)
{
	int x = 0;


	while (x++ < argc)
		printf("%s\n", *argv++);
	return (0);
}
