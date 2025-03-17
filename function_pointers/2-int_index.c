#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function that searches for an integer.
 * @array: tableau d'entier
 * @size: taille tableau
 * @cmp: pointeur vers fonction
 * Return: -1 if no match or cmp,array,size =0 ,return i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp == NULL && array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
