#include "main.h"

/**
 * infinite_add - adds two numbers
 *	@n1: number one.
 *	@n2: number two.
 *	@r: buffer that the function will use to store the result.
 *	@size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int key1 = 0, key2 = 0, A, B, C, D, E = 0;

	while (*(n1 + key1) != '\0')
		key1++;
	while (*(n2 + key2) != '\0')
		key2++;
	if (key1 >= key2)
		B = key1;
	else
		B = key2;
	if (size_r <= B + 1)
		return (0);
	r[B + 1] = '\0';
	key1--, key2--, size_r--;
	C = *(n1 + key1) - 48, D = *(n2 + key2) - 48;
	while (B >= 0)
	{
		A = C + D + E;
		if (A >= 10)
			E = A / 10;
		else
			E = 0;
		if (A > 0)
		*(r + B) = (A % 10) + 48;
		else
			*(r + B) = '0';
		if (key1 > 0)
			key1--, B = *(n1 + key1) - 48;
		else
			B = 0;
		if (key2 > 0)
			key2--, D = *(n2 + key2) - 48;
		else
			D = 0;
		B--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
