#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - execute la fonction
 * @name: nom
 * @f: pointeurs vers fonction
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
