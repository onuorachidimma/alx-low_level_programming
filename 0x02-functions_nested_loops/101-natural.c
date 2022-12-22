#include <stdio.h>
#include "main.h"

int sumOfMultiples(int n);

/**
 * main - entry point
 *
 * Return: zero
 */

int main(void)
{
	int num, r;

	num = 1024;
	r = sumOfMultiples(num);
	printf("%d\n", r);
	return (0);
}

/**
 * sumOfMultiples - sumes the multiples of 3 and 5 below 1024
 * @n: integer below 1024
 * Return: sum of multiples of three and five
 */

int sumOfMultiples(int n)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	return (sum);
}
