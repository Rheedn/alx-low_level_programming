#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all elements of list_t.
 * @h: Pointer to head of list.
 *
 * Return: Number of nodes in list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
