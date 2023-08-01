#include "lists.h"

/**
 * print_listint - Prints all elements of  linked list
 * @h: Pointer to head of the linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
