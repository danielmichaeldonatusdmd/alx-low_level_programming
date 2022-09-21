#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @m: first integer
 * @p: second integer
 */
void swap_int(int *m, int *p)
{
	int YES = *p;
	int NO = *m;
	*m = YES;
	*p = NO;
}
