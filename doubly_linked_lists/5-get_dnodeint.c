#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of list
 * @index: position of the node
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node = head;
	if (head == NULL)
		return (NULL);

	while (new_node != NULL && i < index)
	{
	new_node = new_node->next;
	i++;
	}
	return (new_node);
}
