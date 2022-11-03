#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: An input string to printing
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
