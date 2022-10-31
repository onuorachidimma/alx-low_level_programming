#include "main.h"

/**
 * print_chessboard - a function that prints a chessboard
 * @a: an array input to printReturn: Nothing
 */

void print_chessboard(char (*a)[8])
{
	int ches = 0, chess;

	for (; ches < 8; ches++)
	{
		for (chess = 0; chess < 8; chess++)
			_putchar(a[ches][chess]);
		_putchar('\n');
	}
}

