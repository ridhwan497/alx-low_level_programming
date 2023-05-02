#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *count; /* count nodes */
	listint_t *delete_node; /* node to be deleted */
	unsigned int i; /* index of the node */

	if (head == NULL)
		return (-1);

	count = *head;
	if (index == 0)
	{
		if (count == NULL)
			return (-1);
		*head = count->next;
		free(count);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (count == NULL)
			return (-1);
		count = count->next;
	}

	delete_node = count->next;
	if (delete_node == NULL)
		return (-1);
	count->next = delete_node->next;
	free(delete_node);

	return (1);
}
