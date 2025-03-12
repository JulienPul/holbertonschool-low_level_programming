#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  function that allocates memory for an array, using malloc.
 * @nmemb: number elements of array
 * @size: size of elements in bytes
 * Return: null if nmemb or size =0, malloc fails NULL, calloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return(ptr);
}
