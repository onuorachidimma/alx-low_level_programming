#include "main.h"

/**
 * swap_int - This is a function that swaps the values of two integers.
 * @a: The integer to be printed.
 * @b: The integer to be printed.
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
