#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Function frees a listint_t list.
 * @head: Pointer to first node
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	/* Declare a temporal node for list */
	listint_t *temp = malloc(sizeof(listint_t));
	/* Assign temp node to head */
	temp = head;

	while (head != NULL)
	{
		temp = head->next;

		free(head);

		head = temp;
	}

	head = NULL;

	return;
}
