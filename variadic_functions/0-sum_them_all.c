#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - func return sum of all parameters
 *@n: nb args
 * Return: if n=0 return 0, return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, unsigned int);
	}
	va_end(args);
		return (total);
}
