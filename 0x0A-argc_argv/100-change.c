#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *	@argc: length of argv
 *	@argv: number of argument
 *Return: Always 0
 */

int main(int argc, char *argv[])
{
	int money, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		money = atoi(argv[1]);
		while (money > 0)
		{
			if (money >= 25)
				money -= 25;
			else if (money >= 10)
				money -= 10;
			else if (money >= 5)
				money -= 5;
			else if (money >= 2)
				money -= 2;
			else if (money >= 1)
				money -= 1;
			change += 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
