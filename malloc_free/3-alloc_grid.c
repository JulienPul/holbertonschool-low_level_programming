#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: number colums
 * @height: number arrows
 * Return: if width or height <= 0  NULL
 * Description: Null= failure, pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc
