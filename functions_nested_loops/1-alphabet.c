#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This program uses a for loop to print
 * all lowercase letters from 'a' to 'z', followed by
 * a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char (ch);
	for (ch = 'a'; ch <= 'z'; ch++) /** loop a a z */
	{
		_putchar(ch);
	}
	_putchar('\n'); /**geeghhgerejr*/
}
