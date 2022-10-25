#include "main.h"

/**
 * puts2 - This is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to string
 * Return: Always 0
 */

void puts2(char *str)
{
	int prnt;
	int a;

	prnt = 0;
	a = 0;
	while (str[prnt])
		prnt++;
	prnt -= 1;
	for (; a <= prnt; a += 2)
		_putchar(str[a]);
	_putchar('\n');
}
