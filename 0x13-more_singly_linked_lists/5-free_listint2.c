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
	if (head == NULL)
		return;

	/* Declare a temporal node for list */
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}

	*head = NULL;
}

