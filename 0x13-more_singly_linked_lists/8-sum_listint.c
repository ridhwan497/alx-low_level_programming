#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *count; /* count nodes */
	int sum;
	/* sum of all the data (n) of a listint_t linked list */

	if (head == NULL)
		return (0);

	count = head;
	sum = 0;
	while (count != NULL)
	{
		sum += count->n;
		count = count->next;
	}

	return (sum);
}
