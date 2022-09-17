#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: 0 Always (successful)
 */

void  print_alphabet_x10(void)
{
	char ALPHA;
	int n = 1;

	while (n <= 10)
	{
		ALPHA = 'a';
		while (ALPHA <= 'z')
		{
			_putchar(ALPHA);
			ALPHA++;
		}
		_putchar('\n');
		n++;
	}
}
