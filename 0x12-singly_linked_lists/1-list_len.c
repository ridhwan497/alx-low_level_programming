#include "lists.h"

/**
 * list_len - function that returns
 * the number of elements in a linked list_t
 * @h: ptr to list_t list
 * Return: number of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0; /* count number of nodes */

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count); /* return number of nodes */
}
