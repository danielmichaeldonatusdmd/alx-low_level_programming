#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse followed by a \n
 *
 * Return: 0 Always (success)
 */

int main(void)
{


	char ALPHA;

	for (ALPHA = 'z'; ALPHA >= 'a'; ALPHA--)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
