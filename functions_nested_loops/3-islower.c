#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * Description: Write a function that checks for lowercase character.
 * @c:The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
