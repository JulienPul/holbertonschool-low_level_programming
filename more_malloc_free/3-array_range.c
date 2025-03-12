#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * Description: parametres,taille[],allouer mem,remplir[] return
 * @min: min value
 * @max: max value
 * Return: return ptr, if min>max or malloc fail return null
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (NULL);

	len = (max - min + 1);

	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min + i;
	return (ptr);
}
