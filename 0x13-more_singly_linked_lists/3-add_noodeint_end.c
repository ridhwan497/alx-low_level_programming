#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;/*new node*/
	listint_t *temp_node;/*temp node*/

	if (head == NULL)
		return (NULL);

	add_node = malloc(sizeof(*add_node));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	temp_node = *head;
	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = add_node;

	return (add_node);
}
