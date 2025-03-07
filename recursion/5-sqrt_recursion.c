#include "main.h"

/**
 * helper_sqrt - Fonction bis qui trouve la racine carrée récursivement.
 * @n: Le nombre dont on cherche la racine carrée.
 * @i: La valeur actuelle testée pour être la racine carrée.
 *
 * Return: La racine carrée naturelle ou -1 si elle n'existe pas.
 */
int helper_sqrt(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);
	return helper_sqrt(n, i + 1);
}

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on cherche la racine carrée.
 *
 * Return: La racine carrée naturelle ou -1 si elle n'existe pas.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return helper_sqrt(n, 0);
}
