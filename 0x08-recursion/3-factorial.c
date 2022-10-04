#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 *	@n: number to execute
 * Return: factorial of n
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	fac = factorial(n - 1);

	return (n * fac);
}
