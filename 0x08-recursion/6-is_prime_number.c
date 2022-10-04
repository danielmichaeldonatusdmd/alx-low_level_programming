#include "main.h"

int is_prime(int n, int zz);
/**
 * is_prime_number - returns the 1 if n is prime
 *	@n: number to be checked
 * Return: 1 if n is prime, 0 otherwise
 */


int is_prime_number(int n)
{
	int zz = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, zz));
}


/**
 * is_prime - returns the 1 if n is prime
 *	@n: number to be checked
 *	@zz: number to start checking from
 * Return: 1 if n is prime, 0 otherwise
 */


int is_prime(int n, int zz)
{
	if (zz <= 1)
		return (1);
	else if (n % zz == 0)
		return (0);
	return (is_prime(n, zz - 1));
}
