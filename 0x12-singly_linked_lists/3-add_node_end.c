#include "lists.h"

/**
 * add_node_end - function that adds
 * a new node at the end of a list_t list.
 * @head: ptr to list_t list
 * @str: string to be copied
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t length;
	list_t *create_node;
	list_t *last_node;

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

	length = strlen(create_node->str);
	/* set len */
	create_node->len = length; /* set len */
	create_node->next = NULL; /* make next of new node as NULL */

	if (*head == NULL)
	/* if the Linked List is empty, then make the new node as head */
	{
		*head = create_node;
		return (create_node);
	}

	last_node = *head; /* else traverse till the last node */

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = create_node; /* change the next of last node */

	return (create_node); /* return address of the new element */
}
