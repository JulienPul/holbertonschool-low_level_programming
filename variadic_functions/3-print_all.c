#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @args: The argument list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Prints an integer
 * @args: The argument list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Prints a float
 * @args: The argument list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Prints a string
 * @args: The argument list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str ? str : "(nil)");
}
/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments
 *
 * Description:
 * This function takes a variable number of arguments and
 * prints them based on the given format. The allowed format specifiers are:
 *  - 'c' for char
 *  - 'i' for integer
 *  - 'f' for float
 *  - 's' for string (if NULL, prints "(nil)")
 * The function iterates through the format string and calls the corresponding
 * print function from an array of structures. Values are separated by ", ".
 */
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
	const char *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			j = 0;
			while (formats[j].type)
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
	}

	printf("\n");
	va_end(args);
}
