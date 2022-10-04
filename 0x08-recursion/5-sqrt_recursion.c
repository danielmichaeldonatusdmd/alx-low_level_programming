#include "main.h"

/**
 * _sqrt_recursion - a function that
 * returns the natural square root of a number.
 *	@n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, x));
}


/**
 * _sqrt - returns the square root of a number
 *	@n: test number
 *	@x: squared number
 * Return: square root of n
 */

int find_sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);

	return (_sqrt(n + 1, x));
}
