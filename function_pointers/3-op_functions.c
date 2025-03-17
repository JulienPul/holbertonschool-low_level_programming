#include "3-calc.h"
/**
 * op_functions - 5 functions
 *
 * Return: result or error exit100 %/0 different op exit99
 */
int op_add(int a, int b)
	{
	return (a + b);
	}

int op_sub(int a, int b)
	{
	return (a - b);
	}

int op_mul(int a, int b)
	{
	return (a * b);
	}

int op_div(int a, int b)
	{
		{
		if (b == 0)
			exit(100);
		}
	return (a / b);
	}

int op_mod(int a, int b)
	{
		{
		if (b == 0)
			exit(100);
		}
	return(a % b);
	}

