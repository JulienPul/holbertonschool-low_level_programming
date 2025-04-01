#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string whose length is to be determined
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;

	}
	return (len);
}

/**
 * add_node -  function that adds a new node at the beginning of a list_t
 * @head: Pointer to the pointer of the head of the list
 * @str: String to be duplicated and added to the node
 * Return: the address of the new element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
	if (str == NULL)
		return (NULL);		
new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

return (new_node);
}
