#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: returns pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0, numby;
	char *subs = accept;

	while (*s)
	{
		numby = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				len++;
				numby = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = subs;
		if (numby == 0)
			break;
	}
	return (len);
}
