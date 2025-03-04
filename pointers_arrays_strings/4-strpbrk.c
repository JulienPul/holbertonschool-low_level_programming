#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to search in.
 * @accept: The set of bytes to look for.
 *
 * Return: A pointer to the first matching byte in s, or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i  = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
				return (NULL);
}
