#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i, sign = 1, result = 0, number = 0;

	for (i = 0; s[i] != '\0'; i++)
	if (s[i] == '-')
	else if (s[i] == '+')

