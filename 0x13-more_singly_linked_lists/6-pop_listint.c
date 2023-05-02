#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: data of node that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *count; /* count nodes */
	int data; /* data of node that was deleted */

	if (*head == NULL)
		return (0);

	count = *head;
	data = count->n;
	*head = (*head)->next;
	free(count);

	return (data);
}
