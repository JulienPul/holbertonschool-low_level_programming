#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * You can only use putchar four times maximum in your code
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		if (ch <= '9')
		{
			putchar(ch);
		}
	{
		putchar(' ');
	}
	{
		putchar('\n');
	}
	return (0);
}
