#include "lists.h"
/**
 * dlistint_len - function returns the number of elements dlistint_t
 * @h: pointer to the head of list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
