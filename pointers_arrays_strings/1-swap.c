#include <stdio.h>
#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * Description: jijhfg
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
		*a = *b;
		*b = t;
}
