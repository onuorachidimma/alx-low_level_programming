#include "main.h"

/**
 * _strlen - This is a function that returns the length of a string.
 */

int _strlen(char *s)
{
	char *s;
	int len;

	*s = "My first strlen!";
	len = 0;
	while (*s++)
		len++;
	return (len);
}
