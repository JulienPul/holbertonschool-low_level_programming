#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase x10
 * Description : This program uses a for loop to print
 * all lowercase letters from 'a' to 'z', followed by
 * a new line.
 * Return : Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char (ch);
	char i;

	for (i = 0; i < 10; i++)
	{
		{
	for (ch = 'a'; ch <= 'z'; ch++) /** loop a a z */
		_putchar(ch);
		}
		_putchar('\n'); /**geeghhgerejr*/
	}	
}
