#include "lists.h"
/**
 * list_len - function that returns the number of elements in linked list_t
 * @h: head of the list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

while (h != NULL)
	{
	h = h->next;
	count++;
	}
return (count);
}
