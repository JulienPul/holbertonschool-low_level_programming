#include "main.h"
/**
 * print_most_numbers - print numbers 0-9
 * Description: exept 2 and 4
 *
 * @n: number
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != '2' && n != '4') /*without 2 and 4*/
		{
			_putchar(n + '0');
		}
	}
			_putchar('\n');
}
