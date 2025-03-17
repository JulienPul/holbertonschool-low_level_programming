#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - func exe a function as parameter on each element array
 * @array: tableau int
 *@size: taille tableau
 *@action: pointeur sur fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL && array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
