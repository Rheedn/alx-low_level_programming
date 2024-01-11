#include "lists.h"

/**
 * print_dlistint - prints the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: th number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;

		printf("%d\n", h->n);

		h = h->next;
	}

	return (count);
}
