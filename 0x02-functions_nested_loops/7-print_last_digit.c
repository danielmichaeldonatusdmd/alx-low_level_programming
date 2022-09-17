#include "main.h"

/**
 * print_last_digit - prints the last digit of the given vakue
 *
 * @MD: execute digit
 * Return: 0 Always (succesful)
 */

int print_last_digit(int MD)
{
	int G = MD % 10;

	if (G < 0)
	{
		G = -(G);
		_putchar(G + '0');
		return (G);
	}
	else
	{
		_putchar(G + '0');
		return (G);
	}
	return (0);
}	
