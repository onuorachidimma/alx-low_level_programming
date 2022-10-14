#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		putchar("%d", c);
		c++;
	}
	return 0;
}
