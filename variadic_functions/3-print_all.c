#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Imprime différents types selon la chaîne format
 * @format: Chaîne spécifiant les types des arguments
 * print_char - char
 * print_int - int
 * print_float - float
 * print_string - string
 * @args: args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}


void print_all(const char * const format, ...)
{
	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (formats[j].type != '\0')
		{
			if (format[i] == formats[j].type)
			{
				printf("%s", separator);
				formats[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
