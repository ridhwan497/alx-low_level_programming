#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: ptr to list_t list
 * @str: string to be duplicated
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *create_node;

	create_node = malloc(sizeof(list_t)); /* create new node */

	if (create_node == NULL) /* validate if malloc was successful */
		return (NULL);

	create_node->str = strdup(str); /* duplicate str */
	{
		if (create_node->str == NULL) /* validate if strdup was successful */
		{
			free(create_node); /* free memory if failed */
			return (NULL);
		}
	}
	create_node->len = _strlen(create_node->str); /* set len */

	create_node->next = *head; /* make next of new node as head */
	*head = create_node; /* move the head to point to the new node */

	return (create_node); /* return address of the new element */
}
