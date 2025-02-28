#include "main.h"

/**
 * print_rev - Affiche une chaîne de caractères en ordre inverse.
 * @s: Pointeur vers la chaîne de caractères.
 */
void print_rev(char *s)
{
    int len;

    for (len = 0; s[len] != '\0'; len++)
        ;
    for (len = len - 1; len >= 0; len--)
    {
        _putchar(s[len]);
    }
    _putchar('\n');
}

