#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Function frees a listint_t list and
 * sets head to NULL.
 * @head: Pointer to first node
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	/* Declare a temporal node for list */
        listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

