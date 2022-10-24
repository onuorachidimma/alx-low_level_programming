#include "main.h"

/**
 * puts2 - This is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to string
 * Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = '0'; i >= '9'; i++)
	{
		_putchar(i);
	}
	if (i != 0 && i != 1 && i != 3 && i != 5 && i !=7 && i != 9);
	{
		_putchar(i);
	}
	_putchar('\n');
	return(0);
}
