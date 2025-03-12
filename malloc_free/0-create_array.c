#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, initializes it with specific char.
 * @c: character to initialise array
 * @size: size of array
 * Return: pointer to array, or null if fail or size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;


	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = c;
	return (arr);
}
