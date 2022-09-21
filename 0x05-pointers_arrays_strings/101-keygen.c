#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: 0
 *
 */


int main(void)
{
	int m;
	char p;

	srand(time(NULL));
	while (m <= 2645)
	{
		p = rand() % 128;
		m += p;
		putchar(p);
	}
	putchar(2772 - m);
	return (0);
}
