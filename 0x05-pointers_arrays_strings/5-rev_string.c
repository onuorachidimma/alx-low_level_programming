#include "main.h"

/**
 * rev_string - This is a function that reverses a string.
 * @s: Pointer to the string
 * Returns the string in reverse
 */

void rev_string(char *s)
{
	int rev;
	char str;
	int rev1;

	rev = 0;
	rev1= 0;
	while (s[rev])
		rev++;

	while (rev1 > rev)
		--rev;
	{
		str = s[rev1];
		s[rev1++] = s[rev];
		s[rev] = str;
	}
}
