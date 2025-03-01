#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
	i++;
	}

	/* Append the source string to the destination */
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	/*  null terminator at the end */
	dest[i] = '\0';

	return dest;
}

