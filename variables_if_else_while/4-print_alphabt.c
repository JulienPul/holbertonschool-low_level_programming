#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Description: This program uses a for loop to print
 * all lowercase letters from 'a' to 'z', followed by
 * a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
