#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Always 0
 */

void puts_half(char *str)
{
	int prnt;
	int a;
	int b;

	prnt = 0;
	while (str[prnt])
		prnt++;
	if (prnt % 2 == 0)
		a = prnt / 2;
	else
		a = (prnt + 1) / 2;
	for (b = n; b < prnt; b++)
		_putchar(str[b]);
	_putchar('\n');
}

