#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 Always (success)
 *
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
