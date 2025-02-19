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

	for (ch = '0'; ch <= '9'; ch++) /** loop a a z */
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n'); /**geeghhgerejr*/
	return (0);
}
