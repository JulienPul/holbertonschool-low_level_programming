#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prog op arythmetique
 * @argc: nb args
 * @argv: tableau arg chaine de c
 * Return: 0si ok 98 99 100 si fail
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
	printf("Error\n");
	exit(99);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);
	return (0);
}
