#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 Always (successfully)
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	putchar('\n');
	return (0);
}
