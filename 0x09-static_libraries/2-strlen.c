#include "main.h"

/**
 * _strlen - This is a function that returns the length of a string.
 * @s: Pointer to string
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
