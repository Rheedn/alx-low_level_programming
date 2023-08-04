#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at end of list_t list.
 * @head: Pointer to pointer of head of list.
 * @str: String to be duplicated and added to new node.
 *
 * Return: Address of new element, NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
