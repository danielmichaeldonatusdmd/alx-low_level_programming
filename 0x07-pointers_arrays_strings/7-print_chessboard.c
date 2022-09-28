#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 *	@a: The chessboard to be printed.
 * Return: 0
 */


void print_chessboard(char (*a)[8])
{
	int chess, board;

	for (chess = 0; chess < 8; chess++)
	{
		for (board = 0; board < 8; board++)
		{
			printf("%c", a[chess][board]);
		}
		printf("\n");
	}
}
