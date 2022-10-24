#include "main.h"

/**
 * _strlen - This is a function that returns the length of a string.
 */

int _strlen(char *s)
{
	char *str;
	int len;
	char *s;

	str = "My first strlen!";
	len = _strlen(str);
	*s = *str;

	_strlen(*s);
}
