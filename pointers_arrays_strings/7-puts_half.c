#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	/* Trouver la longueur de la chaîne */
	while (str[len] != '\0')
	len++;

	/* Calculer le point de départ pour la moitié de la chaîne */
	start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);
	/* Afficher la deuxième moitié */
	for (i = start; i < len; i++)
	putchar(str[i]);
	putchar('\n');
}
