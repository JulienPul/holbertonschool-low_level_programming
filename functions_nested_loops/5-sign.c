#include <stdio.h>
#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * Description: Write a function
 * @n:The character to check
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n)

{
	if (n > 0)
		{
		_putchar('+');
			return (1);
		}
	else if (n == 0)
		{
		_putchar('0');
			return (0);
		}
	else
		{
		_putchar('-');
			return (-1);
		}
	return (0);
}
