#include "main.h"

/**
 * print_alphabet - prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 Alwasy.
 */

void print_alphabet(void)
{
	char P;

	P = 'a';

	while (P <= 'z')
	{
		_putchar(P);
		P++;
	}
	_putchar('\n');
}
