#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 Always (success)
 *
 */

int main(void)
{
	int number = '0';

	for (number = 0; number < 10; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
