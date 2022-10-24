#include "main.h"

/**
 * print_rev - This function prints a string, in reverse, followed by a new line.
 * @s: Pointer to the string
 * Return: Returns the string 
 */

void print_rev(char *s)
{
	int rev;

	rev = 0;
	while (s[rev] != '\0')
		rev++;
	while (rev)
		_putchar(s[rev--]);
	_putchar('\n');
}
