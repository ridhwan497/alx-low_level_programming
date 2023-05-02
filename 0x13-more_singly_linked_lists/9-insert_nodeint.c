#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data of the new node
 * Return: address of the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *count; /* count nodes */
	listint_t *add_node; /* new node */
	unsigned int index; /* index of the node */

	if (head == NULL)
		return (NULL);

	count = *head;
	for (index = 0; index < idx - 1; index++)
	{
		if (count == NULL)
			return (NULL);
		count = count->next;
	}

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;

	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
	}
	else
	{
		add_node->next = count->next;
		count->next = add_node;
	}

	return (add_node);
}
