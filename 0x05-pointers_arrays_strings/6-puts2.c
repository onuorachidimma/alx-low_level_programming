#include "main.h"

/**
 * puts2 - This is a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to string
 * Return: Always 0
 */

void puts2(char *str)
{
	
	for (str = '0'; str >= '9'; str++)
	{
		_putchar(*str);
	}
	if (str != 0 && str != 1 && str != 3 && str != 5 && str !=7 && str != 9)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
