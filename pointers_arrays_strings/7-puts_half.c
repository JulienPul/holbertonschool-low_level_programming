#include "main.h"

/**
 * puts_half - Affiche la seconde moitié d'une chaîne de caractères
 * @str: La chaîne de caractères d'entrée
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	/* Trouver la longueur de la chaîne */
	while (str[len] != '\0')
	{
	len++;
	}

	/* Déterminer le point de départ */
	if (len % 2 == 0)
	{
	start = len / 2;
	}
	else
	{
	start = (len + 1) / 2;
	}

	/* Afficher la deuxième moitié */
	for (i = start; i < len; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');  /* Nouvelle ligne */
}
