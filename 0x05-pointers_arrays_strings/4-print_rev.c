#include "main.h"

/**
 * print_rev - This function prints a string, in reverse, and a new line.
 * @s: Pointer to the string
 * Return: Returns the string
 */

void print_rev(char *s)
{
	int rev;

	rev = 0;
	while (s[rev])
		rev++;
	while (rev)
		_putchar(s[--rev]);
	_putchar('\n');
}
