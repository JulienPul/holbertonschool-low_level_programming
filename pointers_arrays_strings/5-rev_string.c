#include "main.h"
/**
 * rev_string -  reverses a string.
 * @s: pointers to the string
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len = 0;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
