#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 *
 * Return: 0 Always (succesful)
 */
void jack_bauer(void)
{
	int I;
	int Q;

	for (I = 0; I < 24; I++)
	{
		for (Q = 0; Q < 60; Q++)
		{
			_putchar((I / 10) + '0');
			_putchar((I % 10) + '0');
			_putchar(':');
			_putchar((Q / 10) + '0');
			_putchar((Q % 10) + '0');
			_putchar('\n');
		}
	}
}
