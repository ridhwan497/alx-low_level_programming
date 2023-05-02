#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	if (head == NULL)
		return (NULL);

	add_node = malloc(sizeof(*add_node));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = *head;

	*head = add_node;

	return (add_node);
}
