#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks for alphabetics characters
 * Description: Write a function that checks for lowercase character.
 * @c:The character to check
 * Return: 1 if c is lowercaseor uppercase letter, 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
