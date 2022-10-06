#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 *	@argc: Number of command line arguments
 *	@argv: Array name
 * Return: 0 always
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
