#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of random
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int n;
	int M;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	M = n % 10;

	printf("Last digit of %d is %d ", n, n % 10);
	if (M > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (M == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
