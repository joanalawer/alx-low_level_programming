#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Function prints all elements of a listint_t list.
 * @h: Pointer head.
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	/* initialize counter for nodes */
	size_t node_count = 0;

	/* check if node pointing to NULL */
	while (h != NULL)
	{
		printf("[%d]", h->n);

		h = h->next;

		node_count++;
	}

	return (node_count);
}
