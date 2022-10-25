#include "main.h"

/**
 * _strcpy - Writes a function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 */

char *_strcpy(char *dest, char *src)
{
	int cpy;

	cpy = 0;
	while (src[cpy])
	{
		dest[cpy] = src[cpy];
		cpy++;
	}
	return (dest);
}
