#include <stdio.h>

/**
  * main - Prints all possible different combinations of two digits.
  *
  * Return: Always 0
  */

int main(void)
{
	int num;

	for (num = "01"; num <= "89"; num++)
	{
		putchar(num);
		if(num != "89")
		{
			putchar(',');
			putchar(' ');
		}
		if(num != "10"-"11" && num != "30"-"33" && num != "40-44")
			putchar(num);
		{
		if(num != "60"-"66" && num != "70"-"78" && num != "80"-"88")
			putchar(num);
		}
	}
	putchar('\n');
	return (0);
}
