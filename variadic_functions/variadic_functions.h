#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/**
 * struct format_type - Associe un caractère à une fonction
 * @type: Type de l'argument
 * @print: Pointeur vers la fonction qui gère l'affichage
*/

typedef struct format_type
{
	char type;
	void (*print)(va_list args);
} format_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
