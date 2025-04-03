#include "lists.h"
/**
 * sum_dlistint - sum of data (n) of dlistint_t linked list.
 * @head: pointer to head of doubly linked list
 * Return: sum of all data in dlistint_t or 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int sum = 0;

	current = head;
	if (head == NULL)
	return (0);

	while (current != NULL)
		{
		sum += current->n;
		current = current->next;
		}
		return (sum);
	}
