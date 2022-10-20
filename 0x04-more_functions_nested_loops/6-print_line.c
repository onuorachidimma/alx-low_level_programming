#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * The number of _ characters to be printed.
 */

void print_line(int n)
{
	int draw;

	if (n > 0)
	{
		for (draw = 0; draw < n; draw++)
			_putchar('_');
	}

	_putchar('\n');
}
