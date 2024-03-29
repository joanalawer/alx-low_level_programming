#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function returns the nth node of a linked list.
 * @head: Pointer to node.
 * @index: Index of nth node.
 * Return: Null if node doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declare node for head */
	listint_t *temp = head;
	unsigned int count = 0;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
