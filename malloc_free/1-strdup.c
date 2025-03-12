#include "main.h"
/**
 * _strdup - ffehehfeh
 * @str: string
 * Return: Null str=Null ,sucess *str, Null if error
 */
char *_strdup(char *str)
{
	int len, i;
	char *dup;

	if (str == 0)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)

	dup = malloc((len + 1) * sizeof(char));
		if (dup == 0)
			return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

			return (dup);
}
