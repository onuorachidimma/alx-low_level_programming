#include "main.h"

/**
 * print_rev - This function prints a string, in reverse, followed by a new line.
 * @s: Pointer to the string
 * Return: Returns the string 
 */

void print_rev(char *s)
{
	while (*str)
		_putchar(*str--);
	_putchar('\n');
}
