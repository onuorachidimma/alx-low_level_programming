#include "main.h"

/**
 * _puts - This function prints a string, followed by a new line
 * @str: Pointer to the string
 * Return: Reuturns the value of the string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
