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
	listint_t *new_node; /* new node */
	unsigned int i; /* index of the node */

	if (head == NULL)
		return (NULL);

	count = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = count;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (count == NULL)
		{
			free(new_node);
			return (NULL);
		}
		count = count->next;
	}

	new_node->next = count->next;
	count->next = new_node;

	return (new_node);
}
