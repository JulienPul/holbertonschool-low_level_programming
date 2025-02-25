#include "main.h"
/**
 * print_diagonal- draw diagonal line in the terminal
 * Description: You can only use _putchar function to print
 *@n: kdojdl
 * Return: 0
 */
void print_diagonal(int n)
{
int i;

		if (n <= 0)
		{
			_putchar('\n');
		}
	{
		for (i = 0; i < n; i++)
		{
			int j;
			
			for (j = 0; j < n; j++)

			_putchar(' ');
		}
			_putchar('\\');
	
			_putchar('\n');
	}
}
