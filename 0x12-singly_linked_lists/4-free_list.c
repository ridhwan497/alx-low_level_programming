#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: ptr to list_t list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head; /* set temp to head */
		head = head->next; /* move head to next node */
		free(temp->str); /* free str */
		free(temp); /* free node */
	}
}
