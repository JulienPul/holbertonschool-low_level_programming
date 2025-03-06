#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argv: vector
 * @argc: count
 * Return: result or 1
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc == 3)
	{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
			return (1);
	}
}
