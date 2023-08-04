#include "lists.h"

/**
 * list_len - Counts the number of elements in linked list.
 * @h: Pointer to head of list.
 *
 * Return: Number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
