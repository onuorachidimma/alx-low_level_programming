#include "main.h"

/**
 * rev_string - This is a function that reverses a string.
 * @s: Pointer to the string
 * Returns the string in reverse
 */

void rev_string(char *s)
{
	int rev;

	int rev = 0;
	while (s[rev])
		rev++;
	return(s[--rev]);
}
