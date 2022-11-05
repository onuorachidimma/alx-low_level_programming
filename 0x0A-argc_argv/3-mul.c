#include <stdio.h>

/**
 * main - A program that multiplies two numbers
 * @argc: The arguments' counter
 * argv: The arguments' values
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int num, num1, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		result = num * num1;
		printf("%d\n", result);
		return (0);
	}
}
