#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination 
 * @src: The source 
 *
 * Return: A pointer to the result string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
        ;
	for (j = 0; src[j] != '\0'; j++, i++)
	{
	dest[i] = src[j];
	}
	// terminating null byte
	dest[i] = '\0';
	return dest;
}
