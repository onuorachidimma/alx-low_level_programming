#include <stdio.h>

/**
 * main - Prints the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int base16;

	for (base16 = '0'; bas16 <= '9'; base16++)
		putchar(base16);
	for (base16 = 'a'; base16 <='f'; base16++)
		putchar(base16);
	putchar('\n');
	return (0);
}
