#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (char ch = 97; ch <= 122, ch++);
	{
		putchar("%c", ch);
	}
	return 0;
}
