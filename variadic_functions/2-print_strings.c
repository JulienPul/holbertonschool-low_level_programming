#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @n: number of strings
 * @separator: string between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string != NULL)
		printf("%s", string);
		else
		printf("(nil)");
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
