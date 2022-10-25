#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @n: The number of elements of the array to be printed
 * @a: The array name
 */

void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array < n - 1)
			printf(", ");
	}
	printf("\n");
}
