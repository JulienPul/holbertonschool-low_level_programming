#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @n: bytes
 * @s:  pointer to the memory area s
 * @b:  constant byte b
 * Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
			i++;
	}

	return (s);
}
