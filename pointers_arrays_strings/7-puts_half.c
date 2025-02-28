#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: idhuhu
 */
void puts_half(char *str)
{
	int len =0, n, i;
	
	for (len = 0; str[len] != '\0'; n++)
		;
		n = (len + 1) / 2;

		for (i = n; i< len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
}
