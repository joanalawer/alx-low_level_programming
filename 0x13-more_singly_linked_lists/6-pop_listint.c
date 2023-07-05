#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Function deletes head of a node
 * of a listint_t list.
 * @head: Pointer to node.
 * Return: Head node's data; 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *headNode;
	int data;

	if (!head || !*head)
	{
		return (0);
	}

	data = (*head)->n;
	headNode = (*head)->next;
	free(*head);
	*head = headNode;

	return (data);
}
