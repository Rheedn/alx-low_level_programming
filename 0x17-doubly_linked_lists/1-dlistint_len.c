#include "lists.h"

/**
 * dlistint_len - counts number of elements in linked dlistint_list
 * @h: the head of the lsit
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);
}
