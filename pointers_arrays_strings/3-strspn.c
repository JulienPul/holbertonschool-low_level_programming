#include "main.h"
/**
 * _strspn - function that gets the length of a pr
 *  * @s: string to search in
 * @accept: string containing acceptable characters
 *
 * Return: Number of characters in the initial segment of s
 * that consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			found = 0;
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
			break;
			}
		}
		if (found == 0)
			break;
	}
	return (count);
}
