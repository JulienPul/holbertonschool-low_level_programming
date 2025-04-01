#include "lists.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string whose length is to be determined
 *
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;

	}
	return (len);
}
/**
 * add_node_end -  adds a new node at the end of a list_t
 * 
 * Return: address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;

	if (str == NULL)
		return (NULL);

new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return(NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;
	{
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		{	
			temp = temp->next;
		}
	temp->next = new_node;
	return (new_node);
	}
}
