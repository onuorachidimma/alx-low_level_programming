#include "main.h"

/**
 * _strlen - This is a function that returns the length of a string.
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = 0;
	*s = &len;
	while (str++)
		len++;
	return (len);
}
