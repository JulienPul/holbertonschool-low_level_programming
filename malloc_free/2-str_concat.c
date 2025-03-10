#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer space memory s1+s2 , if null empty string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	concat = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (concat == 0)
		return (NULL);

		for (i = 0; i < len1; i++)
			concat[i] = s1[i];

		for (j = 0; j < len2; j++)
			concat[i + j] = s2[j];
		concat[i + j] = '\0';

		return (concat);
}
