#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes allocated
 * Return: 98 if fails, return pointer to alloc memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
