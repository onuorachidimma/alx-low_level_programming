#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed 
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not  0\n", n, lastdidit);
	}
		return (0);
}
